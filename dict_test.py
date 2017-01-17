import time

small_dict = {0:0}
big_dict = {i:0 for i in xrange(0,30000000)}

print "small_dict" + str(type(small_dict))
start_time_small_dict = time.time()
for times in xrange(0, 100):
    -1 in small_dict
print("--- %s seconds ---" % (time.time() - start_time_small_dict))

print "big_dict" + str(type(big_dict))
start_time_big_dict = time.time()
for times in xrange(0, 100):
    -1 in big_dict
print("--- %s seconds ---" % (time.time() - start_time_big_dict))

#===================================================================

small_list = [0]
big_list = [i for i in xrange(0,30000000)]

print "small_list" + str(type(small_list))
start_time_small_list = time.time()
for times in xrange(0, 100):
    -1 in small_list
print("--- %s seconds ---" % (time.time() - start_time_small_list))

print "big_list" + str(type(big_list))
start_time_big_list = time.time()
for times in xrange(0, 100):
    -1 in big_list
print("--- %s seconds ---" % (time.time() - start_time_big_list))


"""
>
small_dict<type 'dict'>
--- 0.0 seconds ---
big_dict<type 'dict'>
--- 0.0 seconds ---
small_list<type 'list'>
--- 0.0 seconds ---
big_list<type 'list'>
--- 36.3519999981 seconds ---
"""
