insert_or_replace_test = executable('test-insert-or-replace',
  'test-insert-or-replace.vala',
  dependencies: [tracker_common_dep, tracker_sparql_dep])
test('functional-ipc-insert-or-replace', insert_or_replace_test)

busy_handling_test = executable('test-busy-handling',
  'test-busy-handling.vala',
  dependencies: [tracker_common_dep, tracker_sparql_dep])
test('functional-ipc-busy-handling', busy_handling_test)

direct_query_test = executable('test-direct-query',
  'test-direct-query.vala',
  'test-shared-query.vala',
  dependencies: [tracker_common_dep, tracker_sparql_dep])
test('functional-ipc-direct-query', direct_query_test)

bus_query_test = executable('test-bus-query',
  'test-bus-query.vala',
  'test-shared-query.vala',
  dependencies: [tracker_common_dep, tracker_sparql_dep, tracker_sparql_bus_dep])
test('functional-ipc-bus-query', bus_query_test)

default_update_test = executable('test-default-update',
  'test-default-update.vala',
  'test-shared-update.vala',
  dependencies: [tracker_common_dep, tracker_sparql_dep])
test('functional-ipc-default-update', default_update_test)

bus_update_test = executable('test-bus-update',
  'test-bus-update.vala',
  'test-shared-update.vala',
  dependencies: [tracker_common_dep, tracker_sparql_dep, tracker_sparql_bus_dep])
test('functional-ipc-bus-update', bus_update_test)

class_signal_test = executable('test-class-signal',
  'test-class-signal.vala',
  dependencies: [tracker_common_dep, tracker_sparql_dep])
test('functional-ipc-class-signal', class_signal_test)

class_signal_performance_test = executable('test-class-signal-performance',
  'test-class-signal-performance.vala',
  dependencies: [tracker_common_dep, tracker_sparql_dep])
test('functional-ipc-class-signal-performance', class_signal_performance_test)

class_signal_performance_batch_test = executable('test-class-signal-performance-batch',
  'test-class-signal-performance-batch.vala',
  dependencies: [tracker_common_dep, tracker_sparql_dep])
test('functional-ipc-class-signal-performance-batch', class_signal_performance_batch_test)

update_array_performance_test = executable('test-update-array-performance',
  'test-update-array-performance.c',
  dependencies: [tracker_common_dep, tracker_sparql_dep])
test('functional-ipc-update-array-performance', update_array_performance_test)
