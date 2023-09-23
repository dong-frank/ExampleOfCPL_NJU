add_executable(cycle cycle.c)
add_executable(sphere sphere.c)
add_executable(mole mol.c)
#gcc admin.c -o admin
add_executable(admin admin.c)
#gcc admin.c -o admin lm
target_link_libraries(admin m)

add_executable(admin-scanf- admin-scanf-.c)