#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: prtsDispFunc__10ErsPplTaskFP7_BODYPT
// Address: 0x20d710 - 0x20d7b8
void prtsDispFunc__10ErsPplTaskFP7_BODYPT_0x20d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("prtsDispFunc__10ErsPplTaskFP7_BODYPT");


    ctx->pc = 0x20d710u;

    // 0x20d710: 0x27bdffe0
    ctx->pc = 0x20d710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20d714: 0x7fbf0010
    ctx->pc = 0x20d714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20d718: 0x7fb00000
    ctx->pc = 0x20d718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d71c: 0x84a50020
    ctx->pc = 0x20d71cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x20d720: 0x51900
    ctx->pc = 0x20d720u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x20d724: 0x651823
    ctx->pc = 0x20d724u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20d728: 0x31900
    ctx->pc = 0x20d728u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x20d72c: 0x831821
    ctx->pc = 0x20d72cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20d730: 0x247000a0
    ctx->pc = 0x20d730u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 160));
    // 0x20d734: 0x8c630154
    ctx->pc = 0x20d734u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x20d738: 0x30634000
    ctx->pc = 0x20d738u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x20d73c: 0x1460001a
    ctx->pc = 0x20D73Cu;
    {
        const bool branch_taken_0x20d73c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20d73c) {
            ctx->pc = 0x20D7A8u;
            goto label_20d7a8;
        }
    }
    ctx->pc = 0x20D744u;
    // 0x20d744: 0xc06b218
    ctx->pc = 0x20D744u;
    SET_GPR_U32(ctx, 31, 0x20D74Cu);
    ctx->pc = 0x20D748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D74Cu; }
        else if (ctx->pc != 0x20D74Cu) { ctx->pc = 0x20D74Cu; }
    }
    if (ctx->pc != 0x20D74Cu) { return; }
    ctx->pc = 0x20D74Cu;
    // 0x20d74c: 0x8e0400c4
    ctx->pc = 0x20d74cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x20d750: 0x10800005
    ctx->pc = 0x20D750u;
    {
        const bool branch_taken_0x20d750 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20d750) {
            ctx->pc = 0x20D768u;
            goto label_20d768;
        }
    }
    ctx->pc = 0x20D758u;
    // 0x20d758: 0xc06a0c8
    ctx->pc = 0x20D758u;
    SET_GPR_U32(ctx, 31, 0x20D760u);
    ctx->pc = 0x1A8320u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutForce_0x1a8320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D760u; }
        else if (ctx->pc != 0x20D760u) { ctx->pc = 0x20D760u; }
    }
    if (ctx->pc != 0x20D760u) { return; }
    ctx->pc = 0x20D760u;
    // 0x20d760: 0x10000012
    ctx->pc = 0x20D760u;
    {
        const bool branch_taken_0x20d760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D764u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x20d760) {
            ctx->pc = 0x20D7ACu;
            goto label_20d7ac;
        }
    }
    ctx->pc = 0x20D768u;
label_20d768:
    // 0x20d768: 0x8e040000
    ctx->pc = 0x20d768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d76c: 0x3c020050
    ctx->pc = 0x20d76cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20d770: 0x2443ea20
    ctx->pc = 0x20d770u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x20d774: 0x3c028000
    ctx->pc = 0x20d774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x20d778: 0x42403
    ctx->pc = 0x20d778u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x20d77c: 0x3085ffff
    ctx->pc = 0x20d77cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 65535));
    // 0x20d780: 0x52100
    ctx->pc = 0x20d780u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x20d784: 0x641821
    ctx->pc = 0x20d784u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20d788: 0x8c630000
    ctx->pc = 0x20d788u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d78c: 0x621024
    ctx->pc = 0x20d78cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d790: 0x14400003
    ctx->pc = 0x20D790u;
    {
        const bool branch_taken_0x20d790 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20D794u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x20d790) {
            ctx->pc = 0x20D7A0u;
            goto label_20d7a0;
        }
    }
    ctx->pc = 0x20D798u;
    // 0x20d798: 0xc0863cc
    ctx->pc = 0x20D798u;
    SET_GPR_U32(ctx, 31, 0x20D7A0u);
    ctx->pc = 0x20D79Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7A0u; }
        else if (ctx->pc != 0x20D7A0u) { ctx->pc = 0x20D7A0u; }
    }
    if (ctx->pc != 0x20D7A0u) { return; }
    ctx->pc = 0x20D7A0u;
label_20d7a0:
    // 0x20d7a0: 0xc0853c8
    ctx->pc = 0x20D7A0u;
    SET_GPR_U32(ctx, 31, 0x20D7A8u);
    ctx->pc = 0x20D7A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7A8u; }
        else if (ctx->pc != 0x20D7A8u) { ctx->pc = 0x20D7A8u; }
    }
    if (ctx->pc != 0x20D7A8u) { return; }
    ctx->pc = 0x20D7A8u;
label_20d7a8:
    // 0x20d7a8: 0x7bbf0010
    ctx->pc = 0x20d7a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d7ac:
    // 0x20d7ac: 0x7bb00000
    ctx->pc = 0x20d7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d7b0: 0x3e00008
    ctx->pc = 0x20D7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D7B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D768u: goto label_20d768;
            case 0x20D7A0u: goto label_20d7a0;
            case 0x20D7A8u: goto label_20d7a8;
            case 0x20D7ACu: goto label_20d7ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D7B8u;
}
