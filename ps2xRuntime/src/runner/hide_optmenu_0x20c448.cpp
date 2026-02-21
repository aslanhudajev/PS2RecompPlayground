#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: hide_optmenu
// Address: 0x20c448 - 0x20c4a8
void hide_optmenu_0x20c448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20c448u;

    // 0x20c448: 0x27bdffe0
    ctx->pc = 0x20c448u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c44c: 0xffbf0010
    ctx->pc = 0x20c44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20c450: 0xffb00000
    ctx->pc = 0x20c450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c454: 0x80802d
    ctx->pc = 0x20c454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c458: 0x8e040088
    ctx->pc = 0x20c458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x20c45c: 0x10800003
    ctx->pc = 0x20C45Cu;
    {
        const bool branch_taken_0x20c45c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C460u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x20c45c) {
            ctx->pc = 0x20C46Cu;
            goto label_20c46c;
        }
    }
    ctx->pc = 0x20C464u;
    // 0x20c464: 0xc0b41b8
    ctx->pc = 0x20C464u;
    SET_GPR_U32(ctx, 31, 0x20C46Cu);
    ctx->pc = 0x20C468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C46Cu; }
    }
    if (ctx->pc != 0x20C46Cu) { return; }
    ctx->pc = 0x20C46Cu;
label_20c46c:
    // 0x20c46c: 0x8e0400e0
    ctx->pc = 0x20c46cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x20c470: 0x50800004
    ctx->pc = 0x20C470u;
    {
        const bool branch_taken_0x20c470 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c470) {
            ctx->pc = 0x20C474u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->pc = 0x20C484u;
            goto label_20c484;
        }
    }
    ctx->pc = 0x20C478u;
    // 0x20c478: 0xc0b0ce8
    ctx->pc = 0x20C478u;
    SET_GPR_U32(ctx, 31, 0x20C480u);
    ctx->pc = 0x20C47Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C480u; }
    }
    if (ctx->pc != 0x20C480u) { return; }
    ctx->pc = 0x20C480u;
    // 0x20c480: 0x8e0400dc
    ctx->pc = 0x20c480u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_20c484:
    // 0x20c484: 0x10800005
    ctx->pc = 0x20C484u;
    {
        const bool branch_taken_0x20c484 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C488u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x20c484) {
            ctx->pc = 0x20C49Cu;
            goto label_20c49c;
        }
    }
    ctx->pc = 0x20C48Cu;
    // 0x20c48c: 0x24050001
    ctx->pc = 0x20c48cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c490: 0xdfb00000
    ctx->pc = 0x20c490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c494: 0x80b0ce8
    ctx->pc = 0x20C494u;
    ctx->pc = 0x20C498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2C33A0u;
    MBBlitSetHide_0x2c33a0(rdram, ctx, runtime); return;
    ctx->pc = 0x20C49Cu;
label_20c49c:
    // 0x20c49c: 0xdfb00000
    ctx->pc = 0x20c49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c4a0: 0x3e00008
    ctx->pc = 0x20C4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C4A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C46Cu: goto label_20c46c;
            case 0x20C484u: goto label_20c484;
            case 0x20C49Cu: goto label_20c49c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C4A8u;
}
