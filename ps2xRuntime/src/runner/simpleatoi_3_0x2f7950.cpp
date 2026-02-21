#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: simpleatoi.3
// Address: 0x2f7950 - 0x2f79a4
void simpleatoi_3_0x2f7950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f7950u;

    // 0x2f7950: 0x27bdfff0
    ctx->pc = 0x2f7950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f7954: 0xa4a00000
    ctx->pc = 0x2f7954u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f7958: 0xafa20000
    ctx->pc = 0x2f7958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2f795c: 0x80820000
    ctx->pc = 0x2f795cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f7960: 0x1040000e
    ctx->pc = 0x2F7960u;
    {
        const bool branch_taken_0x2f7960 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f7960) {
            ctx->pc = 0x2F799Cu;
            goto label_2f799c;
        }
    }
    ctx->pc = 0x2F7968u;
    // 0x2f7968: 0x2406000a
    ctx->pc = 0x2f7968u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f796c: 0x94a30000
    ctx->pc = 0x2f796cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2f7970:
    // 0x2f7970: 0x90820000
    ctx->pc = 0x2f7970u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f7974: 0x661818
    ctx->pc = 0x2f7974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f7978: 0x24840001
    ctx->pc = 0x2f7978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f797c: 0x21600
    ctx->pc = 0x2f797cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x2f7980: 0x21603
    ctx->pc = 0x2f7980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f7984: 0x431021
    ctx->pc = 0x2f7984u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f7988: 0x2442ffd0
    ctx->pc = 0x2f7988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2f798c: 0xa4a20000
    ctx->pc = 0x2f798cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f7990: 0x80830000
    ctx->pc = 0x2f7990u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f7994: 0x5460fff6
    ctx->pc = 0x2F7994u;
    {
        const bool branch_taken_0x2f7994 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f7994) {
            ctx->pc = 0x2F7998u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x2F7970u;
            goto label_2f7970;
        }
    }
    ctx->pc = 0x2F799Cu;
label_2f799c:
    // 0x2f799c: 0x3e00008
    ctx->pc = 0x2F799Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F79A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F7970u: goto label_2f7970;
            case 0x2F799Cu: goto label_2f799c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F79A4u;
}
