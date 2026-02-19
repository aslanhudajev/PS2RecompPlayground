#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cd_callback
// Address: 0x2f4e28 - 0x2f4ed8
void cd_callback_0x2f4e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f4e28u;

    // 0x2f4e28: 0x27bdffe0
    ctx->pc = 0x2f4e28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4e2c: 0x3c05003a
    ctx->pc = 0x2f4e2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2f4e30: 0xffb00000
    ctx->pc = 0x2f4e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f4e34: 0xffbf0010
    ctx->pc = 0x2f4e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f4e38: 0x3c10003a
    ctx->pc = 0x2f4e38u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f4e3c: 0x8c830000
    ctx->pc = 0x2f4e3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f4e40: 0x3c04003a
    ctx->pc = 0x2f4e40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2f4e44: 0xae033af0
    ctx->pc = 0x2f4e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15088), GPR_U32(ctx, 3));
    // 0x2f4e48: 0x8e023af0
    ctx->pc = 0x2f4e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 15088)));
    // 0x2f4e4c: 0xac823af4
    ctx->pc = 0x2f4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15092), GPR_U32(ctx, 2));
    // 0x2f4e50: 0x8ca33ac0
    ctx->pc = 0x2f4e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 15040)));
    // 0x2f4e54: 0x1060000a
    ctx->pc = 0x2F4E54u;
    {
        const bool branch_taken_0x2f4e54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4E58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f4e54) {
            ctx->pc = 0x2F4E80u;
            goto label_2f4e80;
        }
    }
    ctx->pc = 0x2F4E5Cu;
    // 0x2f4e5c: 0x8e033af0
    ctx->pc = 0x2f4e5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 15088)));
    // 0x2f4e60: 0x2402000b
    ctx->pc = 0x2f4e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f4e64: 0x14620006
    ctx->pc = 0x2F4E64u;
    {
        const bool branch_taken_0x2f4e64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F4E68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f4e64) {
            ctx->pc = 0x2F4E80u;
            goto label_2f4e80;
        }
    }
    ctx->pc = 0x2F4E6Cu;
    // 0x2f4e6c: 0xae003af0
    ctx->pc = 0x2f4e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15088), GPR_U32(ctx, 0));
    // 0x2f4e70: 0x3c02003a
    ctx->pc = 0x2f4e70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f4e74: 0xac403abc
    ctx->pc = 0x2f4e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15036), GPR_U32(ctx, 0));
    // 0x2f4e78: 0x10000014
    ctx->pc = 0x2F4E78u;
    {
        const bool branch_taken_0x2f4e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4E7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2f4e78) {
            ctx->pc = 0x2F4ECCu;
            goto label_2f4ecc;
        }
    }
    ctx->pc = 0x2F4E80u;
label_2f4e80:
    // 0x2f4e80: 0x8c443ab0
    ctx->pc = 0x2f4e80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15024)));
    // 0x2f4e84: 0xc0c0d84
    ctx->pc = 0x2F4E84u;
    SET_GPR_U32(ctx, 31, 0x2F4E8Cu);
    ctx->pc = 0x303610u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x303610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E8Cu; }
    }
    if (ctx->pc != 0x2F4E8Cu) { return; }
    ctx->pc = 0x2F4E8Cu;
    // 0x2f4e8c: 0x3c03003a
    ctx->pc = 0x2f4e8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f4e90: 0x8c623aac
    ctx->pc = 0x2f4e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15020)));
    // 0x2f4e94: 0x10400009
    ctx->pc = 0x2F4E94u;
    {
        const bool branch_taken_0x2f4e94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4E98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f4e94) {
            ctx->pc = 0x2F4EBCu;
            goto label_2f4ebc;
        }
    }
    ctx->pc = 0x2F4E9Cu;
    // 0x2f4e9c: 0x8c433aec
    ctx->pc = 0x2f4e9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15084)));
    // 0x2f4ea0: 0x10600006
    ctx->pc = 0x2F4EA0u;
    {
        const bool branch_taken_0x2f4ea0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4EA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f4ea0) {
            ctx->pc = 0x2F4EBCu;
            goto label_2f4ebc;
        }
    }
    ctx->pc = 0x2F4EA8u;
    // 0x2f4ea8: 0x8c443ab8
    ctx->pc = 0x2f4ea8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15032)));
    // 0x2f4eac: 0xc0c0d84
    ctx->pc = 0x2F4EACu;
    SET_GPR_U32(ctx, 31, 0x2F4EB4u);
    ctx->pc = 0x303610u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x303610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EB4u; }
    }
    if (ctx->pc != 0x2F4EB4u) { return; }
    ctx->pc = 0x2F4EB4u;
    // 0x2f4eb4: 0x10000003
    ctx->pc = 0x2F4EB4u;
    {
        const bool branch_taken_0x2f4eb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f4eb4) {
            ctx->pc = 0x2F4EC4u;
            goto label_2f4ec4;
        }
    }
    ctx->pc = 0x2F4EBCu;
label_2f4ebc:
    // 0x2f4ebc: 0x3c02003a
    ctx->pc = 0x2f4ebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f4ec0: 0xac403abc
    ctx->pc = 0x2f4ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15036), GPR_U32(ctx, 0));
label_2f4ec4:
    // 0x2f4ec4: 0xae003af0
    ctx->pc = 0x2f4ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15088), GPR_U32(ctx, 0));
    // 0x2f4ec8: 0xdfbf0010
    ctx->pc = 0x2f4ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f4ecc:
    // 0x2f4ecc: 0xdfb00000
    ctx->pc = 0x2f4eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4ed0: 0x3e00008
    ctx->pc = 0x2F4ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4ED4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F4E80u: goto label_2f4e80;
            case 0x2F4EBCu: goto label_2f4ebc;
            case 0x2F4EC4u: goto label_2f4ec4;
            case 0x2F4ECCu: goto label_2f4ecc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F4ED8u;
}
