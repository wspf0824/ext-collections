//
// ext-collections/collections_me.c
//
// @Author CismonX
//

#include <php.h>

#include "php_collections_me.h"

ZEND_BEGIN_ARG_INFO(action_arginfo, 0)
    ZEND_ARG_CALLABLE_INFO(0, action, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(comparator_arginfo, 0)
    ZEND_ARG_CALLABLE_INFO(0, comparator, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(destination_predicate_arginfo, 0)
    ZEND_ARG_OBJ_INFO(0, destination, Collection, 0)
    ZEND_ARG_CALLABLE_INFO(0, predicate, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(destination_transform_arginfo, 0)
    ZEND_ARG_OBJ_INFO(0, destination, Collection, 0)
    ZEND_ARG_CALLABLE_INFO(0, tranform, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(element_arginfo, 0)
    ZEND_ARG_INFO(0, element)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(elements_arginfo, 0)
    ZEND_ARG_INFO(0, elements)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(initial_operation_arginfo, 0)
    ZEND_ARG_INFO(0, initial)
    ZEND_ARG_CALLABLE_INFO(0, operation, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(keys_arginfo, 0)
    ZEND_ARG_INFO(0, keys)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(key_value_arginfo, 0)
    ZEND_ARG_INFO(0, key)
    ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(n_arginfo, 0)
    ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(predicate_arginfo, 0)
    ZEND_ARG_CALLABLE_INFO(0, predicate, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(selector_arginfo, 0)
    ZEND_ARG_CALLABLE_INFO(0, selector, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(operation_arginfo, 0)
    ZEND_ARG_CALLABLE_INFO(0, operation, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(other_arginfo, 0)
    ZEND_ARG_INFO(0, other)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(transform_arginfo, 0)
    ZEND_ARG_CALLABLE_INFO(0, transform, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(associate_by_arginfo, 0)
    ZEND_ARG_CALLABLE_INFO(0, key_selector, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(associate_by_to_arginfo, 0)
    ZEND_ARG_OBJ_INFO(0, destination, Collection, 0)
    ZEND_ARG_CALLABLE_INFO(0, key_selector, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(contains_key_arginfo, 0)
    ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(copy_of_arginfo, 0)
    ZEND_ARG_TYPE_INFO(0, new_size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(copy_of_range_arginfo, 0)
    ZEND_ARG_TYPE_INFO(0, from_idx, IS_LONG, 0)
    ZEND_ARG_TYPE_INFO(0, num_elements, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(fill_arginfo, 0)
    ZEND_ARG_INFO(0, element)
    ZEND_ARG_TYPE_INFO(0, from_index, IS_LONG, 0)
    ZEND_ARG_TYPE_INFO(0, to_index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(get_arginfo, 0)
    ZEND_ARG_INFO(0, key)
    ZEND_ARG_INFO(0, default)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(group_by_arginfo, 0)
    ZEND_ARG_CALLABLE_INFO(0, key_selector, 0)
    ZEND_ARG_CALLABLE_INFO(0, value_transform, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(group_by_to_arginfo, 0)
    ZEND_ARG_OBJ_INFO(0, destination, Collection, 0)
    ZEND_ARG_CALLABLE_INFO(0, key_selector, 0)
    ZEND_ARG_CALLABLE_INFO(0, value_transform, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(to_collection_arginfo, 0)
    ZEND_ARG_OBJ_INFO(0, destination, Collection, 0)
ZEND_END_ARG_INFO()

const zend_function_entry collection_methods[] = {
    PHP_ME(Collection, __construct, NULL, ZEND_ACC_PRIVATE | ZEND_ACC_CTOR)
    PHP_ME(Collection, addAll, elements_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, all, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, any, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, associate, transform_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, associateTo, destination_transform_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, associateBy, associate_by_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, associateByTo, associate_by_to_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, average, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, containsAll, other_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, containsKey, contains_key_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, containsValue, element_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, copyOf, copy_of_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, copyOfRange, copy_of_range_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, count, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, distinct, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, distinctBy, selector_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, drop, n_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, dropLast, n_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, dropLastWhile, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, dropWhile, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, fill, fill_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, filter, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, filterNot, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, filterNotTo, destination_predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, filterTo, destination_predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, find, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, findLast, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, first, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, flatMap, transform_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, flatMapTo, destination_transform_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, flatten, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, fold, initial_operation_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, foldRight, initial_operation_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, forEach, action_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, get, get_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, groupBy, group_by_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, groupByTo, group_by_to_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, indexOf, element_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, indexOfFirst, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, indexOfLast, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, init, elements_arginfo, ZEND_ACC_PUBLIC | ZEND_ACC_STATIC)
    PHP_ME(Collection, intersect, other_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, isEmpty, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, isNotEmpty, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, keys, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, last, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, lastIndexOf, element_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, map, transform_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, mapKeys, transform_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, mapKeysTo, destination_transform_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, mapTo, destination_transform_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, mapValues, transform_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, mapValuesTo, destination_transform_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, max, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, maxBy, selector_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, maxWith, comparator_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, min, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, minBy, selector_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, minWith, comparator_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, minus, elements_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, minusAssign, elements_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, minusKeys, keys_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, minusKeysAssign, keys_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, minusValues, elements_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, minusValuesAssign, elements_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, none, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, onEach, action_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, orEmpty, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, partition, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, plus, elements_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, plusAssign, elements_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, plusValues, elements_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, plusValuesAssign, elements_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, putAll, elements_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, reduce, operation_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, reduceRight, operation_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, remove, key_value_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, removeAll, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, retainAll, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, reverse, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, reversed, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, shuffle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, single, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, slice, keys_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, sort, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, sortBy, selector_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, sortByDescending, selector_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, sortDescending, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, sortWith, comparator_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, sorted, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, sortedBy, selector_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, sortedByDescending, selector_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, sortedDescending, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, sortedWith, comparator_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, take, n_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, takeLast, n_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, takeLastWhile, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, takeWhile, predicate_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, toArray, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, toCollection, to_collection_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, toPairs, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, union, other_arginfo, ZEND_ACC_PUBLIC)
    PHP_ME(Collection, values, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};

const zend_function_entry pair_methods[] = {
    PHP_ME(Pair, __construct, key_value_arginfo, ZEND_ACC_PUBLIC | ZEND_ACC_CTOR)
    PHP_FE_END
};