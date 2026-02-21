#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_help_displayed
// Address: 0x28e028 - 0x28e090
void set_help_displayed_0x28e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28e028u;

    // 0x28e028: 0x4a10003
    ctx->pc = 0x28E028u;
    {
        const bool branch_taken_0x28e028 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x28E02Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e028) {
            ctx->pc = 0x28E038u;
            goto label_28e038;
        }
    }
    ctx->pc = 0x28E030u;
    // 0x28e030: 0x102d
    ctx->pc = 0x28e030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e034: 0x24050003
    ctx->pc = 0x28e034u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
label_28e038:
    // 0x28e038: 0x40302d
    ctx->pc = 0x28e038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e03c: 0xa6102a
    ctx->pc = 0x28e03cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x28e040: 0x14400011
    ctx->pc = 0x28E040u;
    {
        const bool branch_taken_0x28e040 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28E044u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x28e040) {
            ctx->pc = 0x28E088u;
            goto label_28e088;
        }
    }
    ctx->pc = 0x28E048u;
    // 0x28e048: 0x3c020032
    ctx->pc = 0x28e048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28e04c: 0x24481bc0
    ctx->pc = 0x28e04cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28e050: 0xc71018
    ctx->pc = 0x28e050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28e054: 0x0
    ctx->pc = 0x28e054u;
    // NOP
label_28e058:
    // 0x28e058: 0x481821
    ctx->pc = 0x28e058u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x28e05c: 0x8c6200fc
    ctx->pc = 0x28e05cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x28e060: 0x10400005
    ctx->pc = 0x28E060u;
    {
        const bool branch_taken_0x28e060 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E064u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6416));
        if (branch_taken_0x28e060) {
            ctx->pc = 0x28E078u;
            goto label_28e078;
        }
    }
    ctx->pc = 0x28E068u;
    // 0x28e068: 0x641821
    ctx->pc = 0x28e068u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28e06c: 0x90620000
    ctx->pc = 0x28e06cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28e070: 0x34420011
    ctx->pc = 0x28e070u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 17));
    // 0x28e074: 0xa0620000
    ctx->pc = 0x28e074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_28e078:
    // 0x28e078: 0x24c60001
    ctx->pc = 0x28e078u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x28e07c: 0xa6102a
    ctx->pc = 0x28e07cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x28e080: 0x1040fff5
    ctx->pc = 0x28E080u;
    {
        const bool branch_taken_0x28e080 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E084u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x28e080) {
            ctx->pc = 0x28E058u;
            goto label_28e058;
        }
    }
    ctx->pc = 0x28E088u;
label_28e088:
    // 0x28e088: 0x3e00008
    ctx->pc = 0x28E088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28E038u: goto label_28e038;
            case 0x28E058u: goto label_28e058;
            case 0x28E078u: goto label_28e078;
            case 0x28E088u: goto label_28e088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28E090u;
}
