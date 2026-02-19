#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_threaded_io
// Address: 0x2d4140 - 0x2d4250
void do_threaded_io_0x2d4140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4140u;

    // 0x2d4140: 0x27bdffb0
    ctx->pc = 0x2d4140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d4144: 0xffbf0040
    ctx->pc = 0x2d4144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d4148: 0xffb20030
    ctx->pc = 0x2d4148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d414c: 0xffb10020
    ctx->pc = 0x2d414cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2d4150: 0xffb00010
    ctx->pc = 0x2d4150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d4154: 0x80802d
    ctx->pc = 0x2d4154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4158: 0xc0b5044
    ctx->pc = 0x2D4158u;
    SET_GPR_U32(ctx, 31, 0x2D4160u);
    ctx->pc = 0x2D415Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x2D4110u;
    {
        const uint32_t __entryPc = ctx->pc;
        busy_0x2d4110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4160u; }
    }
    if (ctx->pc != 0x2D4160u) { return; }
    ctx->pc = 0x2D4160u;
    // 0x2d4160: 0x40902d
    ctx->pc = 0x2d4160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4164: 0x16400034
    ctx->pc = 0x2D4164u;
    {
        const bool branch_taken_0x2d4164 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D4168u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2d4164) {
            ctx->pc = 0x2D4238u;
            goto label_2d4238;
        }
    }
    ctx->pc = 0x2D416Cu;
    // 0x2d416c: 0x8e02000c
    ctx->pc = 0x2d416cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d4170: 0x8e030018
    ctx->pc = 0x2d4170u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d4174: 0x43102a
    ctx->pc = 0x2d4174u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2d4178: 0x54400016
    ctx->pc = 0x2D4178u;
    {
        const bool branch_taken_0x2d4178 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d4178) {
            ctx->pc = 0x2D417Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2D41D4u;
            goto label_2d41d4;
        }
    }
    ctx->pc = 0x2D4180u;
    // 0x2d4180: 0x8e020120
    ctx->pc = 0x2d4180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2d4184: 0x1040000e
    ctx->pc = 0x2D4184u;
    {
        const bool branch_taken_0x2d4184 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4188u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d4184) {
            ctx->pc = 0x2D41C0u;
            goto label_2d41c0;
        }
    }
    ctx->pc = 0x2D418Cu;
    // 0x2d418c: 0x8e020128
    ctx->pc = 0x2d418cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2d4190: 0xafa20000
    ctx->pc = 0x2d4190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d4194: 0x8e040004
    ctx->pc = 0x2d4194u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d4198: 0x8e060124
    ctx->pc = 0x2d4198u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x2d419c: 0xc0b5d02
    ctx->pc = 0x2D419Cu;
    SET_GPR_U32(ctx, 31, 0x2D41A4u);
    ctx->pc = 0x2D41A0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x2D7408u;
    {
        const uint32_t __entryPc = ctx->pc;
        uncompress_0x2d7408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D41A4u; }
    }
    if (ctx->pc != 0x2D41A4u) { return; }
    ctx->pc = 0x2D41A4u;
    // 0x2d41a4: 0x10400006
    ctx->pc = 0x2D41A4u;
    {
        const bool branch_taken_0x2d41a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D41A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2d41a4) {
            ctx->pc = 0x2D41C0u;
            goto label_2d41c0;
        }
    }
    ctx->pc = 0x2D41ACu;
    // 0x2d41ac: 0x24030080
    ctx->pc = 0x2d41acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d41b0: 0xac438008
    ctx->pc = 0x2d41b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d41b4: 0x3c04003b
    ctx->pc = 0x2d41b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d41b8: 0xc0b4976
    ctx->pc = 0x2D41B8u;
    SET_GPR_U32(ctx, 31, 0x2D41C0u);
    ctx->pc = 0x2D41BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31560));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D41C0u; }
    }
    if (ctx->pc != 0x2D41C0u) { return; }
    ctx->pc = 0x2D41C0u;
label_2d41c0:
    // 0x2d41c0: 0xc0b4f12
    ctx->pc = 0x2D41C0u;
    SET_GPR_U32(ctx, 31, 0x2D41C8u);
    ctx->pc = 0x2D3C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FreeHiMem_0x2d3c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D41C8u; }
    }
    if (ctx->pc != 0x2D41C8u) { return; }
    ctx->pc = 0x2D41C8u;
    // 0x2d41c8: 0x24020001
    ctx->pc = 0x2d41c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d41cc: 0x10000019
    ctx->pc = 0x2D41CCu;
    {
        const bool branch_taken_0x2d41cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D41D0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2d41cc) {
            ctx->pc = 0x2D4234u;
            goto label_2d4234;
        }
    }
    ctx->pc = 0x2D41D4u;
label_2d41d4:
    // 0x2d41d4: 0x628823
    ctx->pc = 0x2d41d4u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d41d8: 0x34038000
    ctx->pc = 0x2d41d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2d41dc: 0x71102a
    ctx->pc = 0x2d41dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x2d41e0: 0x62880b
    ctx->pc = 0x2d41e0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
    // 0x2d41e4: 0x3223000f
    ctx->pc = 0x2d41e4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 15));
    // 0x2d41e8: 0x10600002
    ctx->pc = 0x2D41E8u;
    {
        const bool branch_taken_0x2d41e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D41ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x2d41e8) {
            ctx->pc = 0x2D41F4u;
            goto label_2d41f4;
        }
    }
    ctx->pc = 0x2D41F0u;
    // 0x2d41f0: 0x438823
    ctx->pc = 0x2d41f0u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d41f4:
    // 0x2d41f4: 0x8e020120
    ctx->pc = 0x2d41f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2d41f8: 0x50400002
    ctx->pc = 0x2D41F8u;
    {
        const bool branch_taken_0x2d41f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d41f8) {
            ctx->pc = 0x2D41FCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x2D4204u;
            goto label_2d4204;
        }
    }
    ctx->pc = 0x2D4200u;
    // 0x2d4200: 0x8e030124
    ctx->pc = 0x2d4200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_2d4204:
    // 0x2d4204: 0x24020001
    ctx->pc = 0x2d4204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4208: 0xae020014
    ctx->pc = 0x2d4208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2d420c: 0x8e05000c
    ctx->pc = 0x2d420cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d4210: 0x8e04001c
    ctx->pc = 0x2d4210u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d4214: 0x652821
    ctx->pc = 0x2d4214u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d4218: 0xc0c1c2e
    ctx->pc = 0x2D4218u;
    SET_GPR_U32(ctx, 31, 0x2D4220u);
    ctx->pc = 0x2D421Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3070B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x3070b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4220u; }
    }
    if (ctx->pc != 0x2D4220u) { return; }
    ctx->pc = 0x2D4220u;
    // 0x2d4220: 0x4400005
    ctx->pc = 0x2D4220u;
    {
        const bool branch_taken_0x2d4220 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D4224u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2d4220) {
            ctx->pc = 0x2D4238u;
            goto label_2d4238;
        }
    }
    ctx->pc = 0x2D4228u;
    // 0x2d4228: 0x8e02000c
    ctx->pc = 0x2d4228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d422c: 0x2221021
    ctx->pc = 0x2d422cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d4230: 0xae02000c
    ctx->pc = 0x2d4230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2d4234:
    // 0x2d4234: 0x2e420001
    ctx->pc = 0x2d4234u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 1));
label_2d4238:
    // 0x2d4238: 0xdfbf0040
    ctx->pc = 0x2d4238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d423c: 0xdfb20030
    ctx->pc = 0x2d423cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4240: 0xdfb10020
    ctx->pc = 0x2d4240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4244: 0xdfb00010
    ctx->pc = 0x2d4244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4248: 0x3e00008
    ctx->pc = 0x2D4248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D424Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D41C0u: goto label_2d41c0;
            case 0x2D41D4u: goto label_2d41d4;
            case 0x2D41F4u: goto label_2d41f4;
            case 0x2D4204u: goto label_2d4204;
            case 0x2D4234u: goto label_2d4234;
            case 0x2D4238u: goto label_2d4238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D4250u;
}
