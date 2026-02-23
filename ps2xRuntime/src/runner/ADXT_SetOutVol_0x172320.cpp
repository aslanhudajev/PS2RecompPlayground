#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_SetOutVol
// Address: 0x172320 - 0x172334
void ADXT_SetOutVol_0x172320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_SetOutVol");


    ctx->pc = 0x172320u;

    // 0x172320: 0x80182d
    ctx->pc = 0x172320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172324: 0xa0102d
    ctx->pc = 0x172324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172328: 0x8c64000c
    ctx->pc = 0x172328u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17232c: 0x805b6bc
    ctx->pc = 0x17232Cu;
    ctx->pc = 0x172330u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16DAF0u;
    ADXRNA_SetOutVol_0x16daf0(rdram, ctx, runtime); return;
    ctx->pc = 0x172334u;
}
