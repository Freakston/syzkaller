// AUTOGENERATED FILE

#if defined(__x86_64__) || 0
#define GOARCH "amd64"
#define SYZ_REVISION "3b490e61c63ea05eb2c4569ba31e8335f65af325"
#define __NR_syz_job_default 1000000
#define __NR_syz_mmap 1000001
#define __NR_syz_process_self 1000002
#define __NR_syz_thread_self 1000003
#define __NR_syz_vmar_root_self 1000004

unsigned syscall_count = 77;
call_t syscalls[] = {
    {"syz_job_default", 1000000, (syscall_t)syz_job_default},
    {"syz_mmap", 1000001, (syscall_t)syz_mmap},
    {"syz_process_self", 1000002, (syscall_t)syz_process_self},
    {"syz_thread_self", 1000003, (syscall_t)syz_thread_self},
    {"syz_vmar_root_self", 1000004, (syscall_t)syz_vmar_root_self},
    {"zx_channel_call", 0, (syscall_t)zx_channel_call},
    {"zx_channel_create", 0, (syscall_t)zx_channel_create},
    {"zx_channel_read", 0, (syscall_t)zx_channel_read},
    {"zx_channel_write", 0, (syscall_t)zx_channel_write},
    {"zx_cprng_add_entropy", 0, (syscall_t)zx_cprng_add_entropy},
    {"zx_cprng_draw", 0, (syscall_t)zx_cprng_draw},
    {"zx_event_create", 0, (syscall_t)zx_event_create},
    {"zx_eventpair_create", 0, (syscall_t)zx_eventpair_create},
    {"zx_fifo_create", 0, (syscall_t)zx_fifo_create},
    {"zx_fifo_read", 0, (syscall_t)zx_fifo_read},
    {"zx_fifo_write", 0, (syscall_t)zx_fifo_write},
    {"zx_futex_requeue", 0, (syscall_t)zx_futex_requeue},
    {"zx_futex_wait", 0, (syscall_t)zx_futex_wait},
    {"zx_futex_wake", 0, (syscall_t)zx_futex_wake},
    {"zx_futex_wake_handle_close_thread_exit", 0, (syscall_t)zx_futex_wake_handle_close_thread_exit},
    {"zx_handle_close", 0, (syscall_t)zx_handle_close},
    {"zx_handle_duplicate", 0, (syscall_t)zx_handle_duplicate},
    {"zx_handle_replace", 0, (syscall_t)zx_handle_replace},
    {"zx_job_create", 0, (syscall_t)zx_job_create},
    {"zx_job_set_policy", 0, (syscall_t)zx_job_set_policy},
    {"zx_job_set_relative_importance", 0, (syscall_t)zx_job_set_relative_importance},
    {"zx_log_create", 0, (syscall_t)zx_log_create},
    {"zx_log_read", 0, (syscall_t)zx_log_read},
    {"zx_log_write", 0, (syscall_t)zx_log_write},
    {"zx_nanosleep", 0, (syscall_t)zx_nanosleep},
    {"zx_object_get_child", 0, (syscall_t)zx_object_get_child},
    {"zx_object_get_cookie", 0, (syscall_t)zx_object_get_cookie},
    {"zx_object_get_info$ZX_INFO_CPU_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_HANDLE_BASIC", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_HANDLE_VALID", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_JOB_CHILDREN", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_JOB_PROCESSES", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_KMEM_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_MAPS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_THREADS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_VMOS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_RESOURCE", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_TASK_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_THREAD_EXCEPTION_REPORT", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_THREAD_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_VMAR", 0, (syscall_t)zx_object_get_info},
    {"zx_port_cancel", 0, (syscall_t)zx_port_cancel},
    {"zx_port_create", 0, (syscall_t)zx_port_create},
    {"zx_port_queue", 0, (syscall_t)zx_port_queue},
    {"zx_port_wait", 0, (syscall_t)zx_port_wait},
    {"zx_process_create", 0, (syscall_t)zx_process_create},
    {"zx_process_exit", 0, (syscall_t)zx_process_exit},
    {"zx_process_read_memory", 0, (syscall_t)zx_process_read_memory},
    {"zx_process_start", 0, (syscall_t)zx_process_start},
    {"zx_process_write_memory", 0, (syscall_t)zx_process_write_memory},
    {"zx_socket_create", 0, (syscall_t)zx_socket_create},
    {"zx_socket_read", 0, (syscall_t)zx_socket_read},
    {"zx_socket_write", 0, (syscall_t)zx_socket_write},
    {"zx_system_get_num_cpus", 0, (syscall_t)zx_system_get_num_cpus},
    {"zx_system_get_physmem", 0, (syscall_t)zx_system_get_physmem},
    {"zx_system_get_version", 0, (syscall_t)zx_system_get_version},
    {"zx_task_bind_exception_port", 0, (syscall_t)zx_task_bind_exception_port},
    {"zx_task_kill", 0, (syscall_t)zx_task_kill},
    {"zx_task_resume", 0, (syscall_t)zx_task_resume},
    {"zx_thread_create", 0, (syscall_t)zx_thread_create},
    {"zx_thread_exit", 0, (syscall_t)zx_thread_exit},
    {"zx_thread_read_state", 0, (syscall_t)zx_thread_read_state},
    {"zx_thread_start", 0, (syscall_t)zx_thread_start},
    {"zx_thread_write_state", 0, (syscall_t)zx_thread_write_state},
    {"zx_ticks_get", 0, (syscall_t)zx_ticks_get},
    {"zx_ticks_per_second", 0, (syscall_t)zx_ticks_per_second},
    {"zx_time_get", 0, (syscall_t)zx_time_get},
    {"zx_timer_cancel", 0, (syscall_t)zx_timer_cancel},
    {"zx_timer_create", 0, (syscall_t)zx_timer_create},
    {"zx_timer_set", 0, (syscall_t)zx_timer_set},
    {"zx_vmar_unmap_handle_close_thread_exit", 0, (syscall_t)zx_vmar_unmap_handle_close_thread_exit},

};
#endif

#if defined(__aarch64__) || 0
#define GOARCH "arm64"
#define SYZ_REVISION "7aa3efd28c51db95f99f7b3c8feb4f66ad25f0d8"
#define __NR_syz_job_default 1000000
#define __NR_syz_mmap 1000001
#define __NR_syz_process_self 1000002
#define __NR_syz_thread_self 1000003
#define __NR_syz_vmar_root_self 1000004

unsigned syscall_count = 77;
call_t syscalls[] = {
    {"syz_job_default", 1000000, (syscall_t)syz_job_default},
    {"syz_mmap", 1000001, (syscall_t)syz_mmap},
    {"syz_process_self", 1000002, (syscall_t)syz_process_self},
    {"syz_thread_self", 1000003, (syscall_t)syz_thread_self},
    {"syz_vmar_root_self", 1000004, (syscall_t)syz_vmar_root_self},
    {"zx_channel_call", 0, (syscall_t)zx_channel_call},
    {"zx_channel_create", 0, (syscall_t)zx_channel_create},
    {"zx_channel_read", 0, (syscall_t)zx_channel_read},
    {"zx_channel_write", 0, (syscall_t)zx_channel_write},
    {"zx_cprng_add_entropy", 0, (syscall_t)zx_cprng_add_entropy},
    {"zx_cprng_draw", 0, (syscall_t)zx_cprng_draw},
    {"zx_event_create", 0, (syscall_t)zx_event_create},
    {"zx_eventpair_create", 0, (syscall_t)zx_eventpair_create},
    {"zx_fifo_create", 0, (syscall_t)zx_fifo_create},
    {"zx_fifo_read", 0, (syscall_t)zx_fifo_read},
    {"zx_fifo_write", 0, (syscall_t)zx_fifo_write},
    {"zx_futex_requeue", 0, (syscall_t)zx_futex_requeue},
    {"zx_futex_wait", 0, (syscall_t)zx_futex_wait},
    {"zx_futex_wake", 0, (syscall_t)zx_futex_wake},
    {"zx_futex_wake_handle_close_thread_exit", 0, (syscall_t)zx_futex_wake_handle_close_thread_exit},
    {"zx_handle_close", 0, (syscall_t)zx_handle_close},
    {"zx_handle_duplicate", 0, (syscall_t)zx_handle_duplicate},
    {"zx_handle_replace", 0, (syscall_t)zx_handle_replace},
    {"zx_job_create", 0, (syscall_t)zx_job_create},
    {"zx_job_set_policy", 0, (syscall_t)zx_job_set_policy},
    {"zx_job_set_relative_importance", 0, (syscall_t)zx_job_set_relative_importance},
    {"zx_log_create", 0, (syscall_t)zx_log_create},
    {"zx_log_read", 0, (syscall_t)zx_log_read},
    {"zx_log_write", 0, (syscall_t)zx_log_write},
    {"zx_nanosleep", 0, (syscall_t)zx_nanosleep},
    {"zx_object_get_child", 0, (syscall_t)zx_object_get_child},
    {"zx_object_get_cookie", 0, (syscall_t)zx_object_get_cookie},
    {"zx_object_get_info$ZX_INFO_CPU_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_HANDLE_BASIC", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_HANDLE_VALID", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_JOB_CHILDREN", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_JOB_PROCESSES", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_KMEM_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_MAPS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_THREADS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_VMOS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_RESOURCE", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_TASK_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_THREAD_EXCEPTION_REPORT", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_THREAD_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_VMAR", 0, (syscall_t)zx_object_get_info},
    {"zx_port_cancel", 0, (syscall_t)zx_port_cancel},
    {"zx_port_create", 0, (syscall_t)zx_port_create},
    {"zx_port_queue", 0, (syscall_t)zx_port_queue},
    {"zx_port_wait", 0, (syscall_t)zx_port_wait},
    {"zx_process_create", 0, (syscall_t)zx_process_create},
    {"zx_process_exit", 0, (syscall_t)zx_process_exit},
    {"zx_process_read_memory", 0, (syscall_t)zx_process_read_memory},
    {"zx_process_start", 0, (syscall_t)zx_process_start},
    {"zx_process_write_memory", 0, (syscall_t)zx_process_write_memory},
    {"zx_socket_create", 0, (syscall_t)zx_socket_create},
    {"zx_socket_read", 0, (syscall_t)zx_socket_read},
    {"zx_socket_write", 0, (syscall_t)zx_socket_write},
    {"zx_system_get_num_cpus", 0, (syscall_t)zx_system_get_num_cpus},
    {"zx_system_get_physmem", 0, (syscall_t)zx_system_get_physmem},
    {"zx_system_get_version", 0, (syscall_t)zx_system_get_version},
    {"zx_task_bind_exception_port", 0, (syscall_t)zx_task_bind_exception_port},
    {"zx_task_kill", 0, (syscall_t)zx_task_kill},
    {"zx_task_resume", 0, (syscall_t)zx_task_resume},
    {"zx_thread_create", 0, (syscall_t)zx_thread_create},
    {"zx_thread_exit", 0, (syscall_t)zx_thread_exit},
    {"zx_thread_read_state", 0, (syscall_t)zx_thread_read_state},
    {"zx_thread_start", 0, (syscall_t)zx_thread_start},
    {"zx_thread_write_state", 0, (syscall_t)zx_thread_write_state},
    {"zx_ticks_get", 0, (syscall_t)zx_ticks_get},
    {"zx_ticks_per_second", 0, (syscall_t)zx_ticks_per_second},
    {"zx_time_get", 0, (syscall_t)zx_time_get},
    {"zx_timer_cancel", 0, (syscall_t)zx_timer_cancel},
    {"zx_timer_create", 0, (syscall_t)zx_timer_create},
    {"zx_timer_set", 0, (syscall_t)zx_timer_set},
    {"zx_vmar_unmap_handle_close_thread_exit", 0, (syscall_t)zx_vmar_unmap_handle_close_thread_exit},

};
#endif
