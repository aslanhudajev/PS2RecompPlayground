#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: combo_player
// Address: 0x244700 - 0x244954
void combo_player_0x244700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x244700u;

    // 0x244700: 0x27bdff80
    ctx->pc = 0x244700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x244704: 0xffbf0060
    ctx->pc = 0x244704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x244708: 0xffb30050
    ctx->pc = 0x244708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x24470c: 0xffb20040
    ctx->pc = 0x24470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x244710: 0xffb10030
    ctx->pc = 0x244710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x244714: 0xffb00020
    ctx->pc = 0x244714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x244718: 0xe7b50078
    ctx->pc = 0x244718u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24471c: 0xe7b40070
    ctx->pc = 0x24471cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x244720: 0x80802d
    ctx->pc = 0x244720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244724: 0x46006d46
    ctx->pc = 0x244724u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x244728: 0x2412ffff
    ctx->pc = 0x244728u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24472c: 0x8e020690
    ctx->pc = 0x24472cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x244730: 0x1440001d
    ctx->pc = 0x244730u;
    {
        const bool branch_taken_0x244730 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x244734u;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x244730) {
            ctx->pc = 0x2447A8u;
            goto label_2447a8;
        }
    }
    ctx->pc = 0x244738u;
    // 0x244738: 0x8e020694
    ctx->pc = 0x244738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x24473c: 0x1440007c
    ctx->pc = 0x24473Cu;
    {
        const bool branch_taken_0x24473c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x244740u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x24473c) {
            ctx->pc = 0x244930u;
            goto label_244930;
        }
    }
    ctx->pc = 0x244744u;
    // 0x244744: 0x8e0206b4
    ctx->pc = 0x244744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x244748: 0x10400079
    ctx->pc = 0x244748u;
    {
        const bool branch_taken_0x244748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24474Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x244748) {
            ctx->pc = 0x244930u;
            goto label_244930;
        }
    }
    ctx->pc = 0x244750u;
    // 0x244750: 0x8e020138
    ctx->pc = 0x244750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x244754: 0x30420400
    ctx->pc = 0x244754u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x244758: 0x14400075
    ctx->pc = 0x244758u;
    {
        const bool branch_taken_0x244758 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24475Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x244758) {
            ctx->pc = 0x244930u;
            goto label_244930;
        }
    }
    ctx->pc = 0x244760u;
    // 0x244760: 0x8e0300fc
    ctx->pc = 0x244760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x244764: 0x24020001
    ctx->pc = 0x244764u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x244768: 0x14620071
    ctx->pc = 0x244768u;
    {
        const bool branch_taken_0x244768 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x24476Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x244768) {
            ctx->pc = 0x244930u;
            goto label_244930;
        }
    }
    ctx->pc = 0x244770u;
    // 0x244770: 0xc6010800
    ctx->pc = 0x244770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244774: 0x3c014248
    ctx->pc = 0x244774u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x244778: 0x44810000
    ctx->pc = 0x244778u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24477c: 0x46000834
    ctx->pc = 0x24477cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244780: 0x0
    ctx->pc = 0x244780u;
    // NOP
    // 0x244784: 0x4501006b
    ctx->pc = 0x244784u;
    {
        const bool branch_taken_0x244784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244788u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x244784) {
            ctx->pc = 0x244934u;
            goto label_244934;
        }
    }
    ctx->pc = 0x24478Cu;
    // 0x24478c: 0x8e02089c
    ctx->pc = 0x24478cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2204)));
    // 0x244790: 0x50400068
    ctx->pc = 0x244790u;
    {
        const bool branch_taken_0x244790 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244790) {
            ctx->pc = 0x244794u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x244934u;
            goto label_244934;
        }
    }
    ctx->pc = 0x244798u;
    // 0x244798: 0x8c420010
    ctx->pc = 0x244798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24479c: 0x30421000
    ctx->pc = 0x24479cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x2447a0: 0x50400003
    ctx->pc = 0x2447A0u;
    {
        const bool branch_taken_0x2447a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2447a0) {
            ctx->pc = 0x2447A4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2447B0u;
            goto label_2447b0;
        }
    }
    ctx->pc = 0x2447A8u;
label_2447a8:
    // 0x2447a8: 0x10000061
    ctx->pc = 0x2447A8u;
    {
        const bool branch_taken_0x2447a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2447ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2447a8) {
            ctx->pc = 0x244930u;
            goto label_244930;
        }
    }
    ctx->pc = 0x2447B0u;
label_2447b0:
    // 0x2447b0: 0xe7a00010
    ctx->pc = 0x2447b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2447b4: 0xc6000044
    ctx->pc = 0x2447b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2447b8: 0xe7a00014
    ctx->pc = 0x2447b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2447bc: 0xc6000048
    ctx->pc = 0x2447bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2447c0: 0xe7a00018
    ctx->pc = 0x2447c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2447c4: 0xc0b58fc
    ctx->pc = 0x2447C4u;
    SET_GPR_U32(ctx, 31, 0x2447CCu);
    ctx->pc = 0x2447C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447CCu; }
    }
    if (ctx->pc != 0x2447CCu) { return; }
    ctx->pc = 0x2447CCu;
    // 0x2447cc: 0x882d
    ctx->pc = 0x2447ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2447d0: 0x3c020032
    ctx->pc = 0x2447d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2447d4: 0x24531bc0
    ctx->pc = 0x2447d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2447d8: 0x24022b00
    ctx->pc = 0x2447d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2447dc: 0x0
    ctx->pc = 0x2447dcu;
    // NOP
label_2447e0:
    // 0x2447e0: 0x2221818
    ctx->pc = 0x2447e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2447e4: 0x732021
    ctx->pc = 0x2447e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2447e8: 0x8e020000
    ctx->pc = 0x2447e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2447ec: 0x1222004b
    ctx->pc = 0x2447ECu;
    {
        const bool branch_taken_0x2447ec = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x2447F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2447ec) {
            ctx->pc = 0x24491Cu;
            goto label_24491c;
        }
    }
    ctx->pc = 0x2447F4u;
    // 0x2447f4: 0x8c8300fc
    ctx->pc = 0x2447f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x2447f8: 0x54620049
    ctx->pc = 0x2447F8u;
    {
        const bool branch_taken_0x2447f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2447f8) {
            ctx->pc = 0x2447FCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x244800u;
    // 0x244800: 0x8c820690
    ctx->pc = 0x244800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1680)));
    // 0x244804: 0x54400046
    ctx->pc = 0x244804u;
    {
        const bool branch_taken_0x244804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244804) {
            ctx->pc = 0x244808u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x24480Cu;
    // 0x24480c: 0x9482093c
    ctx->pc = 0x24480cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2364)));
    // 0x244810: 0x30420050
    ctx->pc = 0x244810u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 80));
    // 0x244814: 0x54400042
    ctx->pc = 0x244814u;
    {
        const bool branch_taken_0x244814 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244814) {
            ctx->pc = 0x244818u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x24481Cu;
    // 0x24481c: 0x8c8301e0
    ctx->pc = 0x24481cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x244820: 0x2462ffac
    ctx->pc = 0x244820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967212));
    // 0x244824: 0x2c420007
    ctx->pc = 0x244824u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 7));
    // 0x244828: 0x5440003d
    ctx->pc = 0x244828u;
    {
        const bool branch_taken_0x244828 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244828) {
            ctx->pc = 0x24482Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x244830u;
    // 0x244830: 0x2c62006b
    ctx->pc = 0x244830u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 107));
    // 0x244834: 0x5040003a
    ctx->pc = 0x244834u;
    {
        const bool branch_taken_0x244834 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244834) {
            ctx->pc = 0x244838u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x24483Cu;
    // 0x24483c: 0x8c820138
    ctx->pc = 0x24483cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x244840: 0x30420400
    ctx->pc = 0x244840u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x244844: 0x54400036
    ctx->pc = 0x244844u;
    {
        const bool branch_taken_0x244844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244844) {
            ctx->pc = 0x244848u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x24484Cu;
    // 0x24484c: 0x8e02080c
    ctx->pc = 0x24484cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    // 0x244850: 0x10400004
    ctx->pc = 0x244850u;
    {
        const bool branch_taken_0x244850 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244854u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x244850) {
            ctx->pc = 0x244864u;
            goto label_244864;
        }
    }
    ctx->pc = 0x244858u;
    // 0x244858: 0x8c42d934
    ctx->pc = 0x244858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x24485c: 0x4430030
    ctx->pc = 0x24485Cu;
    {
        const bool branch_taken_0x24485c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x24485c) {
            ctx->pc = 0x244860u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x244864u;
label_244864:
    // 0x244864: 0x8c82089c
    ctx->pc = 0x244864u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2204)));
    // 0x244868: 0x5040002d
    ctx->pc = 0x244868u;
    {
        const bool branch_taken_0x244868 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244868) {
            ctx->pc = 0x24486Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x244870u;
    // 0x244870: 0x8c420010
    ctx->pc = 0x244870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x244874: 0x30421000
    ctx->pc = 0x244874u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x244878: 0x54400029
    ctx->pc = 0x244878u;
    {
        const bool branch_taken_0x244878 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244878) {
            ctx->pc = 0x24487Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x244880u;
    // 0x244880: 0xc4800050
    ctx->pc = 0x244880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244884: 0xc6010050
    ctx->pc = 0x244884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244888: 0x46010001
    ctx->pc = 0x244888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24488c: 0xe7a00000
    ctx->pc = 0x24488cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x244890: 0xc4820054
    ctx->pc = 0x244890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x244894: 0xc6000054
    ctx->pc = 0x244894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244898: 0x46001081
    ctx->pc = 0x244898u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24489c: 0xe7a20004
    ctx->pc = 0x24489cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2448a0: 0xc4800058
    ctx->pc = 0x2448a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2448a4: 0xc6010058
    ctx->pc = 0x2448a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2448a8: 0x46010001
    ctx->pc = 0x2448a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2448ac: 0xe7a00008
    ctx->pc = 0x2448acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2448b0: 0x46001085
    ctx->pc = 0x2448b0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2448b4: 0x3c014040
    ctx->pc = 0x2448b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2448b8: 0x44810000
    ctx->pc = 0x2448b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2448bc: 0x46020034
    ctx->pc = 0x2448bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2448c0: 0x0
    ctx->pc = 0x2448c0u;
    // NOP
    // 0x2448c4: 0x45030016
    ctx->pc = 0x2448C4u;
    {
        const bool branch_taken_0x2448c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2448c4) {
            ctx->pc = 0x2448C8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x2448CCu;
    // 0x2448cc: 0xc0b58fc
    ctx->pc = 0x2448CCu;
    SET_GPR_U32(ctx, 31, 0x2448D4u);
    ctx->pc = 0x2448D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448D4u; }
    }
    if (ctx->pc != 0x2448D4u) { return; }
    ctx->pc = 0x2448D4u;
    // 0x2448d4: 0x460000c6
    ctx->pc = 0x2448d4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2448d8: 0x4603a034
    ctx->pc = 0x2448d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2448dc: 0x0
    ctx->pc = 0x2448dcu;
    // NOP
    // 0x2448e0: 0x4503000f
    ctx->pc = 0x2448E0u;
    {
        const bool branch_taken_0x2448e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2448e0) {
            ctx->pc = 0x2448E4u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x2448E8u;
    // 0x2448e8: 0xc7a20000
    ctx->pc = 0x2448e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2448ec: 0xc7a00010
    ctx->pc = 0x2448ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2448f0: 0x46001082
    ctx->pc = 0x2448f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2448f4: 0xc7a00008
    ctx->pc = 0x2448f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2448f8: 0xc7a10018
    ctx->pc = 0x2448f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2448fc: 0x46010002
    ctx->pc = 0x2448fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x244900: 0x46001080
    ctx->pc = 0x244900u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x244904: 0x46151034
    ctx->pc = 0x244904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244908: 0x0
    ctx->pc = 0x244908u;
    // NOP
    // 0x24490c: 0x45030004
    ctx->pc = 0x24490Cu;
    {
        const bool branch_taken_0x24490c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24490c) {
            ctx->pc = 0x244910u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x244914u;
    // 0x244914: 0x220902d
    ctx->pc = 0x244914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244918: 0x46001d06
    ctx->pc = 0x244918u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
label_24491c:
    // 0x24491c: 0x26310001
    ctx->pc = 0x24491cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_244920:
    // 0x244920: 0x2a220004
    ctx->pc = 0x244920u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x244924: 0x1440ffae
    ctx->pc = 0x244924u;
    {
        const bool branch_taken_0x244924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x244928u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x244924) {
            ctx->pc = 0x2447E0u;
            goto label_2447e0;
        }
    }
    ctx->pc = 0x24492Cu;
    // 0x24492c: 0x240102d
    ctx->pc = 0x24492cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244930:
    // 0x244930: 0xdfbf0060
    ctx->pc = 0x244930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_244934:
    // 0x244934: 0xdfb30050
    ctx->pc = 0x244934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x244938: 0xdfb20040
    ctx->pc = 0x244938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24493c: 0xdfb10030
    ctx->pc = 0x24493cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244940: 0xdfb00020
    ctx->pc = 0x244940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244944: 0xc7b50078
    ctx->pc = 0x244944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x244948: 0xc7b40070
    ctx->pc = 0x244948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24494c: 0x3e00008
    ctx->pc = 0x24494Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244950u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2447A8u: goto label_2447a8;
            case 0x2447B0u: goto label_2447b0;
            case 0x2447E0u: goto label_2447e0;
            case 0x244864u: goto label_244864;
            case 0x24491Cu: goto label_24491c;
            case 0x244920u: goto label_244920;
            case 0x244930u: goto label_244930;
            case 0x244934u: goto label_244934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244954u;
}
