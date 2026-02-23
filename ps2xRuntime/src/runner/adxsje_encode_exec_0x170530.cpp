#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_encode_exec
// Address: 0x170530 - 0x1705bc
void adxsje_encode_exec_0x170530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_encode_exec");


    ctx->pc = 0x170530u;

    // 0x170530: 0x27bdffe0
    ctx->pc = 0x170530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170534: 0xffb00000
    ctx->pc = 0x170534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170538: 0xffbf0010
    ctx->pc = 0x170538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17053c: 0x80802d
    ctx->pc = 0x17053cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170540:
    // 0x170540: 0x82020003
    ctx->pc = 0x170540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x170544: 0x14400014
    ctx->pc = 0x170544u;
    {
        const bool branch_taken_0x170544 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x170544) {
            ctx->pc = 0x170598u;
            goto label_170598;
        }
    }
    ctx->pc = 0x17054Cu;
    // 0x17054c: 0x10000008
    ctx->pc = 0x17054Cu;
    {
        const bool branch_taken_0x17054c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17054c) {
            ctx->pc = 0x170570u;
            goto label_170570;
        }
    }
    ctx->pc = 0x170554u;
    // 0x170554: 0x0
    ctx->pc = 0x170554u;
    // NOP
label_170558:
    // 0x170558: 0x8e030030
    ctx->pc = 0x170558u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17055c: 0x8e04003c
    ctx->pc = 0x17055cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x170560: 0x451021
    ctx->pc = 0x170560u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170564: 0x64182a
    ctx->pc = 0x170564u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x170568: 0x10600008
    ctx->pc = 0x170568u;
    {
        const bool branch_taken_0x170568 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17056Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x170568) {
            ctx->pc = 0x17058Cu;
            goto label_17058c;
        }
    }
    ctx->pc = 0x170570u;
label_170570:
    // 0x170570: 0xc05be24
    ctx->pc = 0x170570u;
    SET_GPR_U32(ctx, 31, 0x170578u);
    ctx->pc = 0x170574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16F890u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_encode_data_0x16f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170578u; }
        else if (ctx->pc != 0x170578u) { ctx->pc = 0x170578u; }
    }
    if (ctx->pc != 0x170578u) { return; }
    ctx->pc = 0x170578u;
    // 0x170578: 0x40282d
    ctx->pc = 0x170578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17057c: 0x54a0fff6
    ctx->pc = 0x17057Cu;
    {
        const bool branch_taken_0x17057c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x17057c) {
            ctx->pc = 0x170580u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x170558u;
            goto label_170558;
        }
    }
    ctx->pc = 0x170584u;
    // 0x170584: 0x1000000a
    ctx->pc = 0x170584u;
    {
        const bool branch_taken_0x170584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170588u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x170584) {
            ctx->pc = 0x1705B0u;
            goto label_1705b0;
        }
    }
    ctx->pc = 0x17058Cu;
label_17058c:
    // 0x17058c: 0x24020001
    ctx->pc = 0x17058cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x170590: 0x1000ffeb
    ctx->pc = 0x170590u;
    {
        const bool branch_taken_0x170590 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170594u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x170590) {
            ctx->pc = 0x170540u;
            goto label_170540;
        }
    }
    ctx->pc = 0x170598u;
label_170598:
    // 0x170598: 0xc05be52
    ctx->pc = 0x170598u;
    SET_GPR_U32(ctx, 31, 0x1705A0u);
    ctx->pc = 0x17059Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16F948u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write_end_code_0x16f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1705A0u; }
        else if (ctx->pc != 0x1705A0u) { ctx->pc = 0x1705A0u; }
    }
    if (ctx->pc != 0x1705A0u) { return; }
    ctx->pc = 0x1705A0u;
    // 0x1705a0: 0x18400002
    ctx->pc = 0x1705A0u;
    {
        const bool branch_taken_0x1705a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1705A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1705a0) {
            ctx->pc = 0x1705ACu;
            goto label_1705ac;
        }
    }
    ctx->pc = 0x1705A8u;
    // 0x1705a8: 0xa2020001
    ctx->pc = 0x1705a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1705ac:
    // 0x1705ac: 0xdfbf0010
    ctx->pc = 0x1705acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1705b0:
    // 0x1705b0: 0xdfb00000
    ctx->pc = 0x1705b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1705b4: 0x3e00008
    ctx->pc = 0x1705B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1705B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170540u: goto label_170540;
            case 0x170558u: goto label_170558;
            case 0x170570u: goto label_170570;
            case 0x17058Cu: goto label_17058c;
            case 0x170598u: goto label_170598;
            case 0x1705ACu: goto label_1705ac;
            case 0x1705B0u: goto label_1705b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1705BCu;
}
