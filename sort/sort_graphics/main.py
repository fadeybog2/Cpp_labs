from matplotlib import pyplot as plt
import pandas as pd
import numpy as np

bubble = pd.read_csv("bubble_sort.csv", index_col=0)
stupid = pd.read_csv("stupid_sort.csv", index_col=0)
gnome = pd.read_csv("gnome_sort.csv", index_col=0)
merge = pd.read_csv("merge_sort.csv", index_col=0)
heap = pd.read_csv("heap_sort.csv", index_col=0)
quick = pd.read_csv("quick_sort.csv", index_col=0)
# print(quick)
sort_graph = pd.concat([merge, heap, quick, bubble, stupid, gnome]).drop(['time_stupid'], 1)
# bubble = bubble.set_index('ln(number)')
# gnome = gnome.set_index('ln(number)')
# stupid = stupid.set_index('ln(number)')
# print(bubble)
# sort_graph_linear = pd.concat([merge, heap, quick]).drop(['time_merge', 'time_heap', 'time_quick'], 1)
# print(sort_graph_linear)
# sort_graph['bubble'] = bubble['time']
# sort_graph['gnome'] = gnome['time']
# sort_graph['stupid'] = stupid['time']

# sort_graph_linear['ln(bubble)'] = bubble['ln(time)']
# sort_graph_linear['ln(gnome)'] = gnome['ln(time)']
# sort_graph_linear['ln(stupid)'] = stupid['ln(time)']
# sort_graph_linear = sort_graph_linear.set_index('ln(number)')
# sort_graph['quick'] = quick['time']
# sort_graph['heap'] = heap['time']
# sort_graph['merge'] = merge['time']
# print(sort_graph_linear)

# print(sort_graph_linear['ln(stupid)'].array[1:19])
# print(sort_graph_linear.index.array[5:])
# print(np.polynomial.polynomial.polyfit(sort_graph_linear.index.array[40:],sort_graph_linear['ln(time_gnome)'].array[40:], 1))
sort_graph.plot()
plt.title('N=100(without stupid)')
plt.ylabel('time in ns')
plt.grid()
plt.show()
