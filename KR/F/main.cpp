#include <iostream>

using std::cout;
using std::endl;

struct Order {
    unsigned int part_id;
    double total_cost;
    char type; // 'c' -- cpu, 'g' -- gpu, 'm' -- motherboard, 'r' -- ram;
    int count;

};

void process_orders(const Order *all_orders, unsigned int old_n, Order **processed_orders, unsigned int *new_n) {
    Order *result = (Order *) malloc(sizeof(Order));
    unsigned int n = 0;
    for (int i = 0; i < old_n; i++) {
        //result = (Order *) realloc(result, (n+1) * sizeof(Order));
        if (all_orders[i].type == 'g') continue;
        else{
            result = (Order *) realloc(result, (n + all_orders[i].count) * sizeof(Order));
            for (int j = n; j < n + all_orders[i].count; j++) {
                Order *new_order = new Order;
                new_order->part_id = all_orders[i].part_id;
                new_order->total_cost = all_orders[i].total_cost / all_orders[i].count;
                new_order->type = all_orders[i].type;
                new_order->count = 1;
                result[j] = *new_order;
            }
            n+=all_orders[i].count;
            continue;
        }
    }
    *processed_orders = result;
    *new_n = n;
}

int main() {


    Order orders[] = {
            {12270, 500.0,  'r', 4},
            {15644, 1220.0, 'g', 2},
            {2330,  700.0,  'c', 1},
    };

    Order *processed_orders = NULL;
    unsigned int new_n = 0;
    process_orders(orders, 3, &processed_orders, &new_n);

    for (unsigned int i = 0; i < new_n; i++)
        cout << processed_orders[i].part_id << " " << processed_orders[i].total_cost
             << " " << processed_orders[i].type << " " << processed_orders[i].count << endl;

// ожидаемый результат:
// 12270 125.0 r 1
// 12270 125.0 r 1
// 12270 125.0 r 1
// 12270 125.0 r 1
// 2330 700.0 c 1

    delete[] processed_orders;
    return 0;
}