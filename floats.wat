(module
 (table 0 anyfunc)
 (memory $0 1)
 (export "memory" (memory $0))
 (export "toInteger" (func $toInteger))
 (func $toInteger (; 0 ;) (param $0 i32) (result i32)
  (get_local $0)
 )
)
