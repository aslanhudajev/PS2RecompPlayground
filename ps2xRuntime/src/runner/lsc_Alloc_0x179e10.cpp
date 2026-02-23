#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: lsc_Alloc
// Address: 0x179e10 - 0x179e64
void lsc_Alloc_0x179e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("lsc_Alloc");


    ctx->pc = 0x179e10u;

    // 0x179e10: 0x3c060024
    ctx->pc = 0x179e10u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x179e14: 0x382d
    ctx->pc = 0x179e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e18: 0x80c2a680
    ctx->pc = 0x179e18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294944384)));
    // 0x179e1c: 0x24c3a680
    ctx->pc = 0x179e1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294944384));
    // 0x179e20: 0x14400003
    ctx->pc = 0x179E20u;
    {
        const bool branch_taken_0x179e20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x179E24u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179e20) {
            ctx->pc = 0x179E30u;
            goto label_179e30;
        }
    }
    ctx->pc = 0x179E28u;
    // 0x179e28: 0x1000000c
    ctx->pc = 0x179E28u;
    {
        const bool branch_taken_0x179e28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179E2Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179e28) {
            ctx->pc = 0x179E5Cu;
            goto label_179e5c;
        }
    }
    ctx->pc = 0x179E30u;
label_179e30:
    // 0x179e30: 0x24a50001
    ctx->pc = 0x179e30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_179e34:
    // 0x179e34: 0x28a20008
    ctx->pc = 0x179e34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x179e38: 0x10400008
    ctx->pc = 0x179E38u;
    {
        const bool branch_taken_0x179e38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x179E3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1080));
        if (branch_taken_0x179e38) {
            ctx->pc = 0x179E5Cu;
            goto label_179e5c;
        }
    }
    ctx->pc = 0x179E40u;
    // 0x179e40: 0x24c4a680
    ctx->pc = 0x179e40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 4294944384));
    // 0x179e44: 0xa21018
    ctx->pc = 0x179e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x179e48: 0x441021
    ctx->pc = 0x179e48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x179e4c: 0x80430000
    ctx->pc = 0x179e4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179e50: 0x1460fff8
    ctx->pc = 0x179E50u;
    {
        const bool branch_taken_0x179e50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x179E54u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x179e50) {
            ctx->pc = 0x179E34u;
            goto label_179e34;
        }
    }
    ctx->pc = 0x179E58u;
    // 0x179e58: 0x40382d
    ctx->pc = 0x179e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179e5c:
    // 0x179e5c: 0x3e00008
    ctx->pc = 0x179E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179E60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179E30u: goto label_179e30;
            case 0x179E34u: goto label_179e34;
            case 0x179E5Cu: goto label_179e5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179E64u;
}
