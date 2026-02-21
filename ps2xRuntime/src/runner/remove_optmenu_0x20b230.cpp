#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: remove_optmenu
// Address: 0x20b230 - 0x20b2a8
void remove_optmenu_0x20b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20b230u;

    // 0x20b230: 0x27bdffe0
    ctx->pc = 0x20b230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20b234: 0xffbf0010
    ctx->pc = 0x20b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20b238: 0xffb00000
    ctx->pc = 0x20b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b23c: 0x80802d
    ctx->pc = 0x20b23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b240: 0xc08496c
    ctx->pc = 0x20B240u;
    SET_GPR_U32(ctx, 31, 0x20B248u);
    ctx->pc = 0x20B244u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 140));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B248u; }
    }
    if (ctx->pc != 0x20B248u) { return; }
    ctx->pc = 0x20B248u;
    // 0x20b248: 0x8e040088
    ctx->pc = 0x20b248u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x20b24c: 0x50800005
    ctx->pc = 0x20B24Cu;
    {
        const bool branch_taken_0x20b24c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b24c) {
            ctx->pc = 0x20B250u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->pc = 0x20B264u;
            goto label_20b264;
        }
    }
    ctx->pc = 0x20B254u;
    // 0x20b254: 0xc0b3f1a
    ctx->pc = 0x20B254u;
    SET_GPR_U32(ctx, 31, 0x20B25Cu);
    ctx->pc = 0x20B258u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B25Cu; }
    }
    if (ctx->pc != 0x20B25Cu) { return; }
    ctx->pc = 0x20B25Cu;
    // 0x20b25c: 0xae020088
    ctx->pc = 0x20b25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x20b260: 0x8e0400dc
    ctx->pc = 0x20b260u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_20b264:
    // 0x20b264: 0x50800005
    ctx->pc = 0x20B264u;
    {
        const bool branch_taken_0x20b264 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b264) {
            ctx->pc = 0x20B268u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->pc = 0x20B27Cu;
            goto label_20b27c;
        }
    }
    ctx->pc = 0x20B26Cu;
    // 0x20b26c: 0xc0b0b38
    ctx->pc = 0x20B26Cu;
    SET_GPR_U32(ctx, 31, 0x20B274u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B274u; }
    }
    if (ctx->pc != 0x20B274u) { return; }
    ctx->pc = 0x20B274u;
    // 0x20b274: 0xae0200dc
    ctx->pc = 0x20b274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x20b278: 0x8e0400e0
    ctx->pc = 0x20b278u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_20b27c:
    // 0x20b27c: 0x50800005
    ctx->pc = 0x20B27Cu;
    {
        const bool branch_taken_0x20b27c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b27c) {
            ctx->pc = 0x20B280u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
            ctx->pc = 0x20B294u;
            goto label_20b294;
        }
    }
    ctx->pc = 0x20B284u;
    // 0x20b284: 0xc0b0b38
    ctx->pc = 0x20B284u;
    SET_GPR_U32(ctx, 31, 0x20B28Cu);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B28Cu; }
    }
    if (ctx->pc != 0x20B28Cu) { return; }
    ctx->pc = 0x20B28Cu;
    // 0x20b28c: 0xae0200e0
    ctx->pc = 0x20b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x20b290: 0xae00006c
    ctx->pc = 0x20b290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_20b294:
    // 0x20b294: 0xae000070
    ctx->pc = 0x20b294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x20b298: 0xdfbf0010
    ctx->pc = 0x20b298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b29c: 0xdfb00000
    ctx->pc = 0x20b29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b2a0: 0x3e00008
    ctx->pc = 0x20B2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B2A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B264u: goto label_20b264;
            case 0x20B27Cu: goto label_20b27c;
            case 0x20B294u: goto label_20b294;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B2A8u;
}
