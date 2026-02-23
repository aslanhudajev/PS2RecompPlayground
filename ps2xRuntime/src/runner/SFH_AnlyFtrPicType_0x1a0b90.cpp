#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyFtrPicType
// Address: 0x1a0b90 - 0x1a0bf8
void SFH_AnlyFtrPicType_0x1a0b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyFtrPicType");


    ctx->pc = 0x1a0b90u;

    // 0x1a0b90: 0x27bdffc0
    ctx->pc = 0x1a0b90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0b94: 0xffb10010
    ctx->pc = 0x1a0b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0b98: 0xffb20020
    ctx->pc = 0x1a0b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0b9c: 0x30b100ff
    ctx->pc = 0x1a0b9cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0ba0: 0xffb00000
    ctx->pc = 0x1a0ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0ba4: 0xc0902d
    ctx->pc = 0x1a0ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ba8: 0xffbf0030
    ctx->pc = 0x1a0ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0bac: 0xc0681d0
    ctx->pc = 0x1A0BACu;
    SET_GPR_U32(ctx, 31, 0x1A0BB4u);
    ctx->pc = 0x1A0BB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BB4u; }
        else if (ctx->pc != 0x1A0BB4u) { ctx->pc = 0x1A0BB4u; }
    }
    if (ctx->pc != 0x1A0BB4u) { return; }
    ctx->pc = 0x1A0BB4u;
    // 0x1a0bb4: 0x40802d
    ctx->pc = 0x1a0bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0bb8: 0x12000005
    ctx->pc = 0x1A0BB8u;
    {
        const bool branch_taken_0x1a0bb8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0BBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0bb8) {
            ctx->pc = 0x1A0BD0u;
            goto label_1a0bd0;
        }
    }
    ctx->pc = 0x1A0BC0u;
    // 0x1a0bc0: 0xc0683b8
    ctx->pc = 0x1A0BC0u;
    SET_GPR_U32(ctx, 31, 0x1A0BC8u);
    ctx->pc = 0x1A0BC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEnableVidFtr_0x1a0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BC8u; }
        else if (ctx->pc != 0x1A0BC8u) { ctx->pc = 0x1A0BC8u; }
    }
    if (ctx->pc != 0x1A0BC8u) { return; }
    ctx->pc = 0x1A0BC8u;
    // 0x1a0bc8: 0x54400003
    ctx->pc = 0x1A0BC8u;
    {
        const bool branch_taken_0x1a0bc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0bc8) {
            ctx->pc = 0x1A0BCCu;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
            ctx->pc = 0x1A0BD8u;
            goto label_1a0bd8;
        }
    }
    ctx->pc = 0x1A0BD0u;
label_1a0bd0:
    // 0x1a0bd0: 0x10000003
    ctx->pc = 0x1A0BD0u;
    {
        const bool branch_taken_0x1a0bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0BD4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0bd0) {
            ctx->pc = 0x1A0BE0u;
            goto label_1a0be0;
        }
    }
    ctx->pc = 0x1A0BD8u;
label_1a0bd8:
    // 0x1a0bd8: 0x24020001
    ctx->pc = 0x1a0bd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0bdc: 0xae430000
    ctx->pc = 0x1a0bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a0be0:
    // 0x1a0be0: 0xdfbf0030
    ctx->pc = 0x1a0be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0be4: 0xdfb20020
    ctx->pc = 0x1a0be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0be8: 0xdfb10010
    ctx->pc = 0x1a0be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0bec: 0xdfb00000
    ctx->pc = 0x1a0becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0bf0: 0x3e00008
    ctx->pc = 0x1A0BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0BF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0BD0u: goto label_1a0bd0;
            case 0x1A0BD8u: goto label_1a0bd8;
            case 0x1A0BE0u: goto label_1a0be0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0BF8u;
}
