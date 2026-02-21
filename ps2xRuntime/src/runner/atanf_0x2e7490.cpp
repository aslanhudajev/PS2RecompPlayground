#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: atanf
// Address: 0x2e7490 - 0x2e7738
void atanf_0x2e7490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e7490u;

    // 0x2e7490: 0x27bdffd0
    ctx->pc = 0x2e7490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e7494: 0x44026000
    ctx->pc = 0x2e7494u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[12]);
    // 0x2e7498: 0xffb10010
    ctx->pc = 0x2e7498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e749c: 0x40882d
    ctx->pc = 0x2e749cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74a0: 0xffbf0020
    ctx->pc = 0x2e74a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e74a4: 0xffb00000
    ctx->pc = 0x2e74a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e74a8: 0x3c037fff
    ctx->pc = 0x2e74a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x2e74ac: 0x3463ffff
    ctx->pc = 0x2e74acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2e74b0: 0x3c02507f
    ctx->pc = 0x2e74b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20607 << 16));
    // 0x2e74b4: 0x2238024
    ctx->pc = 0x2e74b4u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2e74b8: 0x3442ffff
    ctx->pc = 0x2e74b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e74bc: 0x50102a
    ctx->pc = 0x2e74bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2e74c0: 0x10400014
    ctx->pc = 0x2E74C0u;
    {
        const bool branch_taken_0x2e74c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E74C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32640 << 16));
        if (branch_taken_0x2e74c0) {
            ctx->pc = 0x2E7514u;
            goto label_2e7514;
        }
    }
    ctx->pc = 0x2E74C8u;
    // 0x2e74c8: 0x50102a
    ctx->pc = 0x2e74c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2e74cc: 0x10400004
    ctx->pc = 0x2E74CCu;
    {
        const bool branch_taken_0x2e74cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e74cc) {
            ctx->pc = 0x2E74E0u;
            goto label_2e74e0;
        }
    }
    ctx->pc = 0x2E74D4u;
    // 0x2e74d4: 0x10000093
    ctx->pc = 0x2E74D4u;
    {
        const bool branch_taken_0x2e74d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E74D8u;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        if (branch_taken_0x2e74d4) {
            ctx->pc = 0x2E7724u;
            goto label_2e7724;
        }
    }
    ctx->pc = 0x2E74DCu;
    // 0x2e74dc: 0x0
    ctx->pc = 0x2e74dcu;
    // NOP
label_2e74e0:
    // 0x2e74e0: 0x1a200006
    ctx->pc = 0x2E74E0u;
    {
        const bool branch_taken_0x2e74e0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2E74E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2e74e0) {
            ctx->pc = 0x2E74FCu;
            goto label_2e74fc;
        }
    }
    ctx->pc = 0x2E74E8u;
    // 0x2e74e8: 0x3c03003c
    ctx->pc = 0x2e74e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2e74ec: 0xc44192b4
    ctx->pc = 0x2e74ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e74f0: 0xc46092c4
    ctx->pc = 0x2e74f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e74f4: 0x1000008b
    ctx->pc = 0x2E74F4u;
    {
        const bool branch_taken_0x2e74f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E74F8u;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2e74f4) {
            ctx->pc = 0x2E7724u;
            goto label_2e7724;
        }
    }
    ctx->pc = 0x2E74FCu;
label_2e74fc:
    // 0x2e74fc: 0x3c03003c
    ctx->pc = 0x2e74fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2e7500: 0xc44092b4
    ctx->pc = 0x2e7500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7504: 0xc46192c4
    ctx->pc = 0x2e7504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7508: 0x46000007
    ctx->pc = 0x2e7508u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e750c: 0x10000085
    ctx->pc = 0x2E750Cu;
    {
        const bool branch_taken_0x2e750c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E7510u;
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2e750c) {
            ctx->pc = 0x2E7724u;
            goto label_2e7724;
        }
    }
    ctx->pc = 0x2E7514u;
label_2e7514:
    // 0x2e7514: 0x3c023edf
    ctx->pc = 0x2e7514u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16095 << 16));
    // 0x2e7518: 0x3442ffff
    ctx->pc = 0x2e7518u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e751c: 0x50102a
    ctx->pc = 0x2e751cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2e7520: 0x14400011
    ctx->pc = 0x2E7520u;
    {
        const bool branch_taken_0x2e7520 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E7524u;
        SET_GPR_U32(ctx, 2, ((uint32_t)12543 << 16));
        if (branch_taken_0x2e7520) {
            ctx->pc = 0x2E7568u;
            goto label_2e7568;
        }
    }
    ctx->pc = 0x2E7528u;
    // 0x2e7528: 0x3442ffff
    ctx->pc = 0x2e7528u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e752c: 0x50102a
    ctx->pc = 0x2e752cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2e7530: 0x14400044
    ctx->pc = 0x2E7530u;
    {
        const bool branch_taken_0x2e7530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E7534u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2e7530) {
            ctx->pc = 0x2E7644u;
            goto label_2e7644;
        }
    }
    ctx->pc = 0x2E7538u;
    // 0x2e7538: 0x3c017149
    ctx->pc = 0x2e7538u;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x2e753c: 0x3421f2ca
    ctx->pc = 0x2e753cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62154));
    // 0x2e7540: 0x44810000
    ctx->pc = 0x2e7540u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2e7544: 0x3c013f80
    ctx->pc = 0x2e7544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2e7548: 0x44810800
    ctx->pc = 0x2e7548u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2e754c: 0x46006000
    ctx->pc = 0x2e754cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2e7550: 0x46000834
    ctx->pc = 0x2e7550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7554: 0x0
    ctx->pc = 0x2e7554u;
    // NOP
    // 0x2e7558: 0x4502003b
    ctx->pc = 0x2E7558u;
    {
        const bool branch_taken_0x2e7558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7558) {
            ctx->pc = 0x2E755Cu;
            ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->pc = 0x2E7648u;
            goto label_2e7648;
        }
    }
    ctx->pc = 0x2E7560u;
    // 0x2e7560: 0x10000070
    ctx->pc = 0x2E7560u;
    {
        const bool branch_taken_0x2e7560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E7564u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x2e7560) {
            ctx->pc = 0x2E7724u;
            goto label_2e7724;
        }
    }
    ctx->pc = 0x2E7568u;
label_2e7568:
    // 0x2e7568: 0xc0b9e08
    ctx->pc = 0x2E7568u;
    SET_GPR_U32(ctx, 31, 0x2E7570u);
    ctx->pc = 0x2E7820u;
    {
        const uint32_t __entryPc = ctx->pc;
        fabsf_0x2e7820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7570u; }
    }
    if (ctx->pc != 0x2E7570u) { return; }
    ctx->pc = 0x2E7570u;
    // 0x2e7570: 0x3c023f97
    ctx->pc = 0x2e7570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16279 << 16));
    // 0x2e7574: 0x3442ffff
    ctx->pc = 0x2e7574u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e7578: 0x50102a
    ctx->pc = 0x2e7578u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2e757c: 0x1440001b
    ctx->pc = 0x2E757Cu;
    {
        const bool branch_taken_0x2e757c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E7580u;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2e757c) {
            ctx->pc = 0x2E75ECu;
            goto label_2e75ec;
        }
    }
    ctx->pc = 0x2E7584u;
    // 0x2e7584: 0x3c023f2f
    ctx->pc = 0x2e7584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16175 << 16));
    // 0x2e7588: 0x3442ffff
    ctx->pc = 0x2e7588u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e758c: 0x50102a
    ctx->pc = 0x2e758cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2e7590: 0x1440000d
    ctx->pc = 0x2E7590u;
    {
        const bool branch_taken_0x2e7590 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E7594u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2e7590) {
            ctx->pc = 0x2E75C8u;
            goto label_2e75c8;
        }
    }
    ctx->pc = 0x2E7598u;
    // 0x2e7598: 0x460c6000
    ctx->pc = 0x2e7598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2e759c: 0x3c013f80
    ctx->pc = 0x2e759cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2e75a0: 0x44811000
    ctx->pc = 0x2e75a0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2e75a4: 0x3c014000
    ctx->pc = 0x2e75a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2e75a8: 0x44810800
    ctx->pc = 0x2e75a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2e75ac: 0x46020001
    ctx->pc = 0x2e75acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2e75b0: 0x46016040
    ctx->pc = 0x2e75b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2e75b4: 0x0
    ctx->pc = 0x2e75b4u;
    // NOP
    // 0x2e75b8: 0x0
    ctx->pc = 0x2e75b8u;
    // NOP
    // 0x2e75bc: 0x46010303
    ctx->pc = 0x2e75bcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x2e75c0: 0x10000021
    ctx->pc = 0x2E75C0u;
    {
        const bool branch_taken_0x2e75c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E75C4u;
        ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        if (branch_taken_0x2e75c0) {
            ctx->pc = 0x2E7648u;
            goto label_2e7648;
        }
    }
    ctx->pc = 0x2E75C8u;
label_2e75c8:
    // 0x2e75c8: 0x3c013f80
    ctx->pc = 0x2e75c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2e75cc: 0x44810000
    ctx->pc = 0x2e75ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2e75d0: 0x46006040
    ctx->pc = 0x2e75d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2e75d4: 0x46006001
    ctx->pc = 0x2e75d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2e75d8: 0x0
    ctx->pc = 0x2e75d8u;
    // NOP
    // 0x2e75dc: 0x0
    ctx->pc = 0x2e75dcu;
    // NOP
    // 0x2e75e0: 0x46010303
    ctx->pc = 0x2e75e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x2e75e4: 0x10000017
    ctx->pc = 0x2E75E4u;
    {
        const bool branch_taken_0x2e75e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E75E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2e75e4) {
            ctx->pc = 0x2E7644u;
            goto label_2e7644;
        }
    }
    ctx->pc = 0x2E75ECu;
label_2e75ec:
    // 0x2e75ec: 0x3c02401b
    ctx->pc = 0x2e75ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16411 << 16));
    // 0x2e75f0: 0x3442ffff
    ctx->pc = 0x2e75f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e75f4: 0x50102a
    ctx->pc = 0x2e75f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2e75f8: 0x1440000d
    ctx->pc = 0x2E75F8u;
    {
        const bool branch_taken_0x2e75f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E75FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2e75f8) {
            ctx->pc = 0x2E7630u;
            goto label_2e7630;
        }
    }
    ctx->pc = 0x2E7600u;
    // 0x2e7600: 0x3c013fc0
    ctx->pc = 0x2e7600u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x2e7604: 0x44810000
    ctx->pc = 0x2e7604u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2e7608: 0x3c013f80
    ctx->pc = 0x2e7608u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2e760c: 0x44811000
    ctx->pc = 0x2e760cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2e7610: 0x46006042
    ctx->pc = 0x2e7610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2e7614: 0x46006001
    ctx->pc = 0x2e7614u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2e7618: 0x46020840
    ctx->pc = 0x2e7618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2e761c: 0x0
    ctx->pc = 0x2e761cu;
    // NOP
    // 0x2e7620: 0x0
    ctx->pc = 0x2e7620u;
    // NOP
    // 0x2e7624: 0x46010303
    ctx->pc = 0x2e7624u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x2e7628: 0x10000006
    ctx->pc = 0x2E7628u;
    {
        const bool branch_taken_0x2e7628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E762Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2e7628) {
            ctx->pc = 0x2E7644u;
            goto label_2e7644;
        }
    }
    ctx->pc = 0x2E7630u;
label_2e7630:
    // 0x2e7630: 0x3c01bf80
    ctx->pc = 0x2e7630u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2e7634: 0x44810000
    ctx->pc = 0x2e7634u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2e7638: 0x0
    ctx->pc = 0x2e7638u;
    // NOP
    // 0x2e763c: 0x0
    ctx->pc = 0x2e763cu;
    // NOP
    // 0x2e7640: 0x460c0303
    ctx->pc = 0x2e7640u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
label_2e7644:
    // 0x2e7644: 0x460c6282
    ctx->pc = 0x2e7644u;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2e7648:
    // 0x2e7648: 0x3c03003c
    ctx->pc = 0x2e7648u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2e764c: 0x246292c8
    ctx->pc = 0x2e764cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294939336));
    // 0x2e7650: 0xc46992c8
    ctx->pc = 0x2e7650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2e7654: 0xc4430028
    ctx->pc = 0x2e7654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e7658: 0x460a5002
    ctx->pc = 0x2e7658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x2e765c: 0xc4450020
    ctx->pc = 0x2e765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e7660: 0xc4440024
    ctx->pc = 0x2e7660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e7664: 0xc441001c
    ctx->pc = 0x2e7664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7668: 0x460300c2
    ctx->pc = 0x2e7668u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e766c: 0xc4460018
    ctx->pc = 0x2e766cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2e7670: 0x46040102
    ctx->pc = 0x2e7670u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e7674: 0xc4420014
    ctx->pc = 0x2e7674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7678: 0xc4470010
    ctx->pc = 0x2e7678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2e767c: 0x46032940
    ctx->pc = 0x2e767cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2e7680: 0xc4480008
    ctx->pc = 0x2e7680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2e7684: 0x46040840
    ctx->pc = 0x2e7684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2e7688: 0xc443000c
    ctx->pc = 0x2e7688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e768c: 0xc4440004
    ctx->pc = 0x2e768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e7690: 0x46050142
    ctx->pc = 0x2e7690u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2e7694: 0x46010042
    ctx->pc = 0x2e7694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7698: 0x46053180
    ctx->pc = 0x2e7698u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2e769c: 0x46011080
    ctx->pc = 0x2e769cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2e76a0: 0x46060182
    ctx->pc = 0x2e76a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2e76a4: 0x46020082
    ctx->pc = 0x2e76a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e76a8: 0x460639c0
    ctx->pc = 0x2e76a8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x2e76ac: 0x460218c0
    ctx->pc = 0x2e76acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2e76b0: 0x460701c2
    ctx->pc = 0x2e76b0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2e76b4: 0x460300c2
    ctx->pc = 0x2e76b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e76b8: 0x46074200
    ctx->pc = 0x2e76b8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x2e76bc: 0x46032100
    ctx->pc = 0x2e76bcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2e76c0: 0x46080202
    ctx->pc = 0x2e76c0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2e76c4: 0x46040042
    ctx->pc = 0x2e76c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e76c8: 0x46084a40
    ctx->pc = 0x2e76c8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x2e76cc: 0x4810005
    ctx->pc = 0x2E76CCu;
    {
        const bool branch_taken_0x2e76cc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2E76D0u;
        ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
        if (branch_taken_0x2e76cc) {
            ctx->pc = 0x2E76E4u;
            goto label_2e76e4;
        }
    }
    ctx->pc = 0x2E76D4u;
    // 0x2e76d4: 0x46010000
    ctx->pc = 0x2e76d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e76d8: 0x46006002
    ctx->pc = 0x2e76d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2e76dc: 0x10000011
    ctx->pc = 0x2E76DCu;
    {
        const bool branch_taken_0x2e76dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E76E0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2e76dc) {
            ctx->pc = 0x2E7724u;
            goto label_2e7724;
        }
    }
    ctx->pc = 0x2E76E4u;
label_2e76e4:
    // 0x2e76e4: 0x46010000
    ctx->pc = 0x2e76e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e76e8: 0x3c02003c
    ctx->pc = 0x2e76e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2e76ec: 0x42080
    ctx->pc = 0x2e76ecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e76f0: 0x244292b8
    ctx->pc = 0x2e76f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939320));
    // 0x2e76f4: 0x821021
    ctx->pc = 0x2e76f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e76f8: 0x3c03003c
    ctx->pc = 0x2e76f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2e76fc: 0x46006002
    ctx->pc = 0x2e76fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2e7700: 0xc4420000
    ctx->pc = 0x2e7700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7704: 0x246392a8
    ctx->pc = 0x2e7704u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294939304));
    // 0x2e7708: 0x832021
    ctx->pc = 0x2e7708u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e770c: 0x46020001
    ctx->pc = 0x2e770cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2e7710: 0xc4810000
    ctx->pc = 0x2e7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7714: 0x460c0001
    ctx->pc = 0x2e7714u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2e7718: 0x6210002
    ctx->pc = 0x2E7718u;
    {
        const bool branch_taken_0x2e7718 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2E771Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2e7718) {
            ctx->pc = 0x2E7724u;
            goto label_2e7724;
        }
    }
    ctx->pc = 0x2E7720u;
    // 0x2e7720: 0x46000007
    ctx->pc = 0x2e7720u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2e7724:
    // 0x2e7724: 0xdfbf0020
    ctx->pc = 0x2e7724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7728: 0xdfb10010
    ctx->pc = 0x2e7728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e772c: 0xdfb00000
    ctx->pc = 0x2e772cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7730: 0x3e00008
    ctx->pc = 0x2E7730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7734u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E74E0u: goto label_2e74e0;
            case 0x2E74FCu: goto label_2e74fc;
            case 0x2E7514u: goto label_2e7514;
            case 0x2E7568u: goto label_2e7568;
            case 0x2E75C8u: goto label_2e75c8;
            case 0x2E75ECu: goto label_2e75ec;
            case 0x2E7630u: goto label_2e7630;
            case 0x2E7644u: goto label_2e7644;
            case 0x2E7648u: goto label_2e7648;
            case 0x2E76E4u: goto label_2e76e4;
            case 0x2E7724u: goto label_2e7724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E7738u;
}
