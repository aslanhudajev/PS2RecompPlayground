#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void SetKomTumiHaichiTbl2_ItemRand_B__FP11ENEMY_TABLEPC26_KOMONO_TUMIAGE_HAICHI_TBLiifii_0x9f0ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetKomTumiHaichiTbl2_ItemRand_B__FP11ENEMY_TABLEPC26_KOMONO_TUMIAGE_HAICHI_TBLiifii");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("SetKomTumiHaichiTbl2_ItemRand_B__FP11ENEMY_TABLEPC26_KOMONO_TUMIAGE_HAICHI_TBLiifii", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
