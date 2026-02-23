#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_ExecServer
// Address: 0x174148 - 0x1741a8
void ADXPD_ExecServer_0x174148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_ExecServer");


    ctx->pc = 0x174148u;

    // 0x174148: 0x27bdffc0
    ctx->pc = 0x174148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17414c: 0x3c020024
    ctx->pc = 0x17414cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x174150: 0xffb00000
    ctx->pc = 0x174150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174154: 0xffb20020
    ctx->pc = 0x174154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x174158: 0x245085c0
    ctx->pc = 0x174158u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294936000));
    // 0x17415c: 0xffb10010
    ctx->pc = 0x17415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x174160: 0x24120001
    ctx->pc = 0x174160u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x174164: 0xffbf0030
    ctx->pc = 0x174164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x174168: 0x261101a0
    ctx->pc = 0x174168u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 416));
    // 0x17416c: 0x8e020000
    ctx->pc = 0x17416cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_174170:
    // 0x174170: 0x54520004
    ctx->pc = 0x174170u;
    {
        const bool branch_taken_0x174170 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x174170) {
            ctx->pc = 0x174174u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 52));
            ctx->pc = 0x174184u;
            goto label_174184;
        }
    }
    ctx->pc = 0x174178u;
    // 0x174178: 0xc05d020
    ctx->pc = 0x174178u;
    SET_GPR_U32(ctx, 31, 0x174180u);
    ctx->pc = 0x17417Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174080u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_ExecHndl_0x174080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174180u; }
        else if (ctx->pc != 0x174180u) { ctx->pc = 0x174180u; }
    }
    if (ctx->pc != 0x174180u) { return; }
    ctx->pc = 0x174180u;
    // 0x174180: 0x26100034
    ctx->pc = 0x174180u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 52));
label_174184:
    // 0x174184: 0x211102a
    ctx->pc = 0x174184u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x174188: 0x5440fff9
    ctx->pc = 0x174188u;
    {
        const bool branch_taken_0x174188 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x174188) {
            ctx->pc = 0x17418Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x174170u;
            goto label_174170;
        }
    }
    ctx->pc = 0x174190u;
    // 0x174190: 0xdfbf0030
    ctx->pc = 0x174190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174194: 0xdfb20020
    ctx->pc = 0x174194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174198: 0xdfb10010
    ctx->pc = 0x174198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17419c: 0xdfb00000
    ctx->pc = 0x17419cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1741a0: 0x3e00008
    ctx->pc = 0x1741A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1741A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174170u: goto label_174170;
            case 0x174184u: goto label_174184;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1741A8u;
}
