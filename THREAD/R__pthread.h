//*CMZ :  2.22/06 17/06/99  14.54.15  by  Rene Brun
//*-- Author :    Rene Brun   17/06/99
typedef struct _pthread_descr_struct *_pthread_descr;

typedef struct
{
  int m_spinlock;               /* Spin lock to guarantee mutual exclusion.  */
  int m_count;                  /* 0 if free, > 0 if taken.  */
  _pthread_descr m_owner;       /* Owner of mutex (for recursive mutexes) */
  int m_kind;                   /* Kind of mutex */
  struct _pthread_queue m_waiting; /* Threads waiting on this mutex.  */
} pthread_mutex_t;

typedef struct
{
  int c_spinlock;                  /* Spin lock to protect the queue.  */
  struct _pthread_queue c_waiting; /* Threads waiting on this condition.  */
} pthread_cond_t;
