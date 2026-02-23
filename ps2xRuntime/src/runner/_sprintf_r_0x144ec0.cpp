#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _sprintf_r
// Address: 0x144ec0 - 0x144f28
void _sprintf_r_0x144ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_sprintf_r");


    ctx->pc = 0x144ec0u;

    // 0x144ec0: 0x27bdff20
    ctx->pc = 0x144ec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x144ec4: 0xa0602d
    ctx->pc = 0x144ec4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ec8: 0x3c027fff
    ctx->pc = 0x144ec8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x144ecc: 0xafa40054
    ctx->pc = 0x144eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x144ed0: 0x3442ffff
    ctx->pc = 0x144ed0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x144ed4: 0xc0282d
    ctx->pc = 0x144ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ed8: 0x24030208
    ctx->pc = 0x144ed8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 520));
    // 0x144edc: 0xffbf0060
    ctx->pc = 0x144edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x144ee0: 0xffa700b8
    ctx->pc = 0x144ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x144ee4: 0x3a0202d
    ctx->pc = 0x144ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ee8: 0xffa800c0
    ctx->pc = 0x144ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x144eec: 0x27a600b8
    ctx->pc = 0x144eecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 184));
    // 0x144ef0: 0xffa900c8
    ctx->pc = 0x144ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x144ef4: 0xffaa00d0
    ctx->pc = 0x144ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x144ef8: 0xffab00d8
    ctx->pc = 0x144ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x144efc: 0xa7a3000c
    ctx->pc = 0x144efcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x144f00: 0xafac0010
    ctx->pc = 0x144f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x144f04: 0xafa20014
    ctx->pc = 0x144f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x144f08: 0xafac0000
    ctx->pc = 0x144f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x144f0c: 0xc051a9a
    ctx->pc = 0x144F0Cu;
    SET_GPR_U32(ctx, 31, 0x144F14u);
    ctx->pc = 0x144F10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x146A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        vfprintf_0x146a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F14u; }
        else if (ctx->pc != 0x144F14u) { ctx->pc = 0x144F14u; }
    }
    if (ctx->pc != 0x144F14u) { return; }
    ctx->pc = 0x144F14u;
    // 0x144f14: 0x8fa30000
    ctx->pc = 0x144f14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144f18: 0xdfbf0060
    ctx->pc = 0x144f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144f1c: 0xa0600000
    ctx->pc = 0x144f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x144f20: 0x3e00008
    ctx->pc = 0x144F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144F24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144F28u;
}
