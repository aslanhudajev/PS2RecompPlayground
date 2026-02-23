#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTX_Init
// Address: 0x177228 - 0x1772d0
void DTX_Init_0x177228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTX_Init");


    ctx->pc = 0x177228u;

    // 0x177228: 0x27bdffe0
    ctx->pc = 0x177228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17722c: 0x8f828298
    ctx->pc = 0x17722cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935192)));
    // 0x177230: 0xffbf0010
    ctx->pc = 0x177230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177234: 0x14400020
    ctx->pc = 0x177234u;
    {
        const bool branch_taken_0x177234 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x177238u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x177234) {
            ctx->pc = 0x1772B8u;
            goto label_1772b8;
        }
    }
    ctx->pc = 0x17723Cu;
    // 0x17723c: 0x1000000b
    ctx->pc = 0x17723Cu;
    {
        const bool branch_taken_0x17723c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177240u;
        SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
        if (branch_taken_0x17723c) {
            ctx->pc = 0x17726Cu;
            goto label_17726c;
        }
    }
    ctx->pc = 0x177244u;
    // 0x177244: 0x0
    ctx->pc = 0x177244u;
    // NOP
label_177248:
    // 0x177248: 0x3c020001
    ctx->pc = 0x177248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x17724c: 0x2403ffff
    ctx->pc = 0x17724cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_177250:
    // 0x177250: 0x2442ffff
    ctx->pc = 0x177250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177254: 0x0
    ctx->pc = 0x177254u;
    // NOP
    // 0x177258: 0x0
    ctx->pc = 0x177258u;
    // NOP
    // 0x17725c: 0x0
    ctx->pc = 0x17725cu;
    // NOP
    // 0x177260: 0x0
    ctx->pc = 0x177260u;
    // NOP
    // 0x177264: 0x1443fffa
    ctx->pc = 0x177264u;
    {
        const bool branch_taken_0x177264 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x177264) {
            ctx->pc = 0x177250u;
            goto label_177250;
        }
    }
    ctx->pc = 0x17726Cu;
label_17726c:
    // 0x17726c: 0x8f858280
    ctx->pc = 0x17726cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935168)));
    // 0x177270: 0x26048ff0
    ctx->pc = 0x177270u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294938608));
    // 0x177274: 0xc055dfe
    ctx->pc = 0x177274u;
    SET_GPR_U32(ctx, 31, 0x17727Cu);
    ctx->pc = 0x177278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1577F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1577f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17727Cu; }
        else if (ctx->pc != 0x17727Cu) { ctx->pc = 0x17727Cu; }
    }
    if (ctx->pc != 0x17727Cu) { return; }
    ctx->pc = 0x17727Cu;
    // 0x17727c: 0x441000b
    ctx->pc = 0x17727Cu;
    {
        const bool branch_taken_0x17727c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x177280u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294938608));
        if (branch_taken_0x17727c) {
            ctx->pc = 0x1772ACu;
            goto label_1772ac;
        }
    }
    ctx->pc = 0x177284u;
    // 0x177284: 0x3c04002c
    ctx->pc = 0x177284u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x177288: 0xc05114a
    ctx->pc = 0x177288u;
    SET_GPR_U32(ctx, 31, 0x177290u);
    ctx->pc = 0x17728Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947400));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177290u; }
        else if (ctx->pc != 0x177290u) { ctx->pc = 0x177290u; }
    }
    if (ctx->pc != 0x177290u) { return; }
    ctx->pc = 0x177290u;
label_177290:
    // 0x177290: 0x0
    ctx->pc = 0x177290u;
    // NOP
    // 0x177294: 0x0
    ctx->pc = 0x177294u;
    // NOP
    // 0x177298: 0x0
    ctx->pc = 0x177298u;
    // NOP
    // 0x17729c: 0x0
    ctx->pc = 0x17729cu;
    // NOP
    // 0x1772a0: 0x0
    ctx->pc = 0x1772a0u;
    // NOP
    // 0x1772a4: 0x1000fffa
    ctx->pc = 0x1772A4u;
    {
        const bool branch_taken_0x1772a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1772a4) {
            ctx->pc = 0x177290u;
            goto label_177290;
        }
    }
    ctx->pc = 0x1772ACu;
label_1772ac:
    // 0x1772ac: 0x8c430024
    ctx->pc = 0x1772acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1772b0: 0x1060ffe5
    ctx->pc = 0x1772B0u;
    {
        const bool branch_taken_0x1772b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1772B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935192)));
        if (branch_taken_0x1772b0) {
            ctx->pc = 0x177248u;
            goto label_177248;
        }
    }
    ctx->pc = 0x1772B8u;
label_1772b8:
    // 0x1772b8: 0x24420001
    ctx->pc = 0x1772b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1772bc: 0xdfbf0010
    ctx->pc = 0x1772bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1772c0: 0xdfb00000
    ctx->pc = 0x1772c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1772c4: 0xaf828298
    ctx->pc = 0x1772c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935192), GPR_U32(ctx, 2));
    // 0x1772c8: 0x3e00008
    ctx->pc = 0x1772C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1772CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177248u: goto label_177248;
            case 0x177250u: goto label_177250;
            case 0x17726Cu: goto label_17726c;
            case 0x177290u: goto label_177290;
            case 0x1772ACu: goto label_1772ac;
            case 0x1772B8u: goto label_1772b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1772D0u;
}
