#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfset_IsCondValid
// Address: 0x19d1e0 - 0x19d274
void sfset_IsCondValid_0x19d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfset_IsCondValid");


    ctx->pc = 0x19d1e0u;

    // 0x19d1e0: 0x27bdffc0
    ctx->pc = 0x19d1e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d1e4: 0x24020006
    ctx->pc = 0x19d1e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19d1e8: 0xffb20020
    ctx->pc = 0x19d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19d1ec: 0xffb10010
    ctx->pc = 0x19d1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19d1f0: 0x80902d
    ctx->pc = 0x19d1f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1f4: 0xffb00000
    ctx->pc = 0x19d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d1f8: 0xc0882d
    ctx->pc = 0x19d1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1fc: 0xa0802d
    ctx->pc = 0x19d1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d200: 0x1602000a
    ctx->pc = 0x19D200u;
    {
        const bool branch_taken_0x19d200 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x19D204u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x19d200) {
            ctx->pc = 0x19D22Cu;
            goto label_19d22c;
        }
    }
    ctx->pc = 0x19D208u;
    // 0x19d208: 0x24020001
    ctx->pc = 0x19d208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d20c: 0x16220008
    ctx->pc = 0x19D20Cu;
    {
        const bool branch_taken_0x19d20c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x19D210u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x19d20c) {
            ctx->pc = 0x19D230u;
            goto label_19d230;
        }
    }
    ctx->pc = 0x19D214u;
    // 0x19d214: 0xc067cf6
    ctx->pc = 0x19D214u;
    SET_GPR_U32(ctx, 31, 0x19D21Cu);
    ctx->pc = 0x19D218u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x19F3D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_IsSetup_0x19f3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D21Cu; }
        else if (ctx->pc != 0x19D21Cu) { ctx->pc = 0x19D21Cu; }
    }
    if (ctx->pc != 0x19D21Cu) { return; }
    ctx->pc = 0x19D21Cu;
    // 0x19d21c: 0x14400004
    ctx->pc = 0x19D21Cu;
    {
        const bool branch_taken_0x19d21c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D220u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x19d21c) {
            ctx->pc = 0x19D230u;
            goto label_19d230;
        }
    }
    ctx->pc = 0x19D224u;
    // 0x19d224: 0x1000000d
    ctx->pc = 0x19D224u;
    {
        const bool branch_taken_0x19d224 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D228u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d224) {
            ctx->pc = 0x19D25Cu;
            goto label_19d25c;
        }
    }
    ctx->pc = 0x19D22Cu;
label_19d22c:
    // 0x19d22c: 0x24020005
    ctx->pc = 0x19d22cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_19d230:
    // 0x19d230: 0x1602000a
    ctx->pc = 0x19D230u;
    {
        const bool branch_taken_0x19d230 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x19D234u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19d230) {
            ctx->pc = 0x19D25Cu;
            goto label_19d25c;
        }
    }
    ctx->pc = 0x19D238u;
    // 0x19d238: 0x16220009
    ctx->pc = 0x19D238u;
    {
        const bool branch_taken_0x19d238 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x19D23Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19d238) {
            ctx->pc = 0x19D260u;
            goto label_19d260;
        }
    }
    ctx->pc = 0x19D240u;
    // 0x19d240: 0x240202d
    ctx->pc = 0x19d240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d244: 0xc067cf6
    ctx->pc = 0x19D244u;
    SET_GPR_U32(ctx, 31, 0x19D24Cu);
    ctx->pc = 0x19D248u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19F3D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_IsSetup_0x19f3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D24Cu; }
        else if (ctx->pc != 0x19D24Cu) { ctx->pc = 0x19D24Cu; }
    }
    if (ctx->pc != 0x19D24Cu) { return; }
    ctx->pc = 0x19D24Cu;
    // 0x19d24c: 0x40182d
    ctx->pc = 0x19d24cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d250: 0x10600002
    ctx->pc = 0x19D250u;
    {
        const bool branch_taken_0x19d250 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D254u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d250) {
            ctx->pc = 0x19D25Cu;
            goto label_19d25c;
        }
    }
    ctx->pc = 0x19D258u;
    // 0x19d258: 0x24020001
    ctx->pc = 0x19d258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19d25c:
    // 0x19d25c: 0xdfbf0030
    ctx->pc = 0x19d25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19d260:
    // 0x19d260: 0xdfb20020
    ctx->pc = 0x19d260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d264: 0xdfb10010
    ctx->pc = 0x19d264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d268: 0xdfb00000
    ctx->pc = 0x19d268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d26c: 0x3e00008
    ctx->pc = 0x19D26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D270u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D22Cu: goto label_19d22c;
            case 0x19D230u: goto label_19d230;
            case 0x19D25Cu: goto label_19d25c;
            case 0x19D260u: goto label_19d260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D274u;
}
