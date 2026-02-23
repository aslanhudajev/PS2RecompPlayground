#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyFtrColType
// Address: 0x1a0b28 - 0x1a0b90
void SFH_AnlyFtrColType_0x1a0b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyFtrColType");


    ctx->pc = 0x1a0b28u;

    // 0x1a0b28: 0x27bdffc0
    ctx->pc = 0x1a0b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0b2c: 0xffb10010
    ctx->pc = 0x1a0b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0b30: 0xffb20020
    ctx->pc = 0x1a0b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0b34: 0x30b100ff
    ctx->pc = 0x1a0b34u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0b38: 0xffb00000
    ctx->pc = 0x1a0b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0b3c: 0xc0902d
    ctx->pc = 0x1a0b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b40: 0xffbf0030
    ctx->pc = 0x1a0b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0b44: 0xc0681d0
    ctx->pc = 0x1A0B44u;
    SET_GPR_U32(ctx, 31, 0x1A0B4Cu);
    ctx->pc = 0x1A0B48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B4Cu; }
        else if (ctx->pc != 0x1A0B4Cu) { ctx->pc = 0x1A0B4Cu; }
    }
    if (ctx->pc != 0x1A0B4Cu) { return; }
    ctx->pc = 0x1A0B4Cu;
    // 0x1a0b4c: 0x40802d
    ctx->pc = 0x1a0b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b50: 0x12000005
    ctx->pc = 0x1A0B50u;
    {
        const bool branch_taken_0x1a0b50 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0B54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b50) {
            ctx->pc = 0x1A0B68u;
            goto label_1a0b68;
        }
    }
    ctx->pc = 0x1A0B58u;
    // 0x1a0b58: 0xc0683b8
    ctx->pc = 0x1A0B58u;
    SET_GPR_U32(ctx, 31, 0x1A0B60u);
    ctx->pc = 0x1A0B5Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEnableVidFtr_0x1a0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B60u; }
        else if (ctx->pc != 0x1A0B60u) { ctx->pc = 0x1A0B60u; }
    }
    if (ctx->pc != 0x1A0B60u) { return; }
    ctx->pc = 0x1A0B60u;
    // 0x1a0b60: 0x54400003
    ctx->pc = 0x1A0B60u;
    {
        const bool branch_taken_0x1a0b60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0b60) {
            ctx->pc = 0x1A0B64u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
            ctx->pc = 0x1A0B70u;
            goto label_1a0b70;
        }
    }
    ctx->pc = 0x1A0B68u;
label_1a0b68:
    // 0x1a0b68: 0x10000003
    ctx->pc = 0x1A0B68u;
    {
        const bool branch_taken_0x1a0b68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0B6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b68) {
            ctx->pc = 0x1A0B78u;
            goto label_1a0b78;
        }
    }
    ctx->pc = 0x1A0B70u;
label_1a0b70:
    // 0x1a0b70: 0x24020001
    ctx->pc = 0x1a0b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0b74: 0xae430000
    ctx->pc = 0x1a0b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a0b78:
    // 0x1a0b78: 0xdfbf0030
    ctx->pc = 0x1a0b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0b7c: 0xdfb20020
    ctx->pc = 0x1a0b7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0b80: 0xdfb10010
    ctx->pc = 0x1a0b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0b84: 0xdfb00000
    ctx->pc = 0x1a0b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0b88: 0x3e00008
    ctx->pc = 0x1A0B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0B8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0B68u: goto label_1a0b68;
            case 0x1A0B70u: goto label_1a0b70;
            case 0x1A0B78u: goto label_1a0b78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0B90u;
}
