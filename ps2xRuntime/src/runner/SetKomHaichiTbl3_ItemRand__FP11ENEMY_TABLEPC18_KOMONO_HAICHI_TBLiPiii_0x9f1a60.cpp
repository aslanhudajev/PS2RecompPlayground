#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void SetKomHaichiTbl3_ItemRand__FP11ENEMY_TABLEPC18_KOMONO_HAICHI_TBLiPiii_0x9f1a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetKomHaichiTbl3_ItemRand__FP11ENEMY_TABLEPC18_KOMONO_HAICHI_TBLiPiii");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("SetKomHaichiTbl3_ItemRand__FP11ENEMY_TABLEPC18_KOMONO_HAICHI_TBLiPiii", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
