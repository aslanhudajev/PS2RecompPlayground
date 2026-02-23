#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void SetKomHaichiTbl2_ItemRand__FP11ENEMY_TABLEPC18_KOMONO_HAICHI_TBLiifi_0x9f0c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetKomHaichiTbl2_ItemRand__FP11ENEMY_TABLEPC18_KOMONO_HAICHI_TBLiifi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("SetKomHaichiTbl2_ItemRand__FP11ENEMY_TABLEPC18_KOMONO_HAICHI_TBLiifi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
