#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: powf
// Address: 0x2e8508 - 0x2e8a10
void powf_0x2e8508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e8508u;

    // 0x2e8508: 0x27bdff60
    ctx->pc = 0x2e8508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e850c: 0xe7b70098
    ctx->pc = 0x2e850cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e8510: 0xe7b40080
    ctx->pc = 0x2e8510u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e8514: 0x460065c6
    ctx->pc = 0x2e8514u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2e8518: 0x46006d06
    ctx->pc = 0x2e8518u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2e851c: 0xffb30060
    ctx->pc = 0x2e851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2e8520: 0xffb00030
    ctx->pc = 0x2e8520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e8524: 0xe7b50088
    ctx->pc = 0x2e8524u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2e8528: 0xffbf0070
    ctx->pc = 0x2e8528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2e852c: 0x3c13003c
    ctx->pc = 0x2e852cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x2e8530: 0xffb20050
    ctx->pc = 0x2e8530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2e8534: 0xffb10040
    ctx->pc = 0x2e8534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2e8538: 0xc0baade
    ctx->pc = 0x2E8538u;
    SET_GPR_U32(ctx, 31, 0x2E8540u);
    ctx->pc = 0x2E853Cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->pc = 0x2EAB78u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_powf_0x2eab78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8540u; }
    }
    if (ctx->pc != 0x2E8540u) { return; }
    ctx->pc = 0x2E8540u;
    // 0x2e8540: 0x8e709c60
    ctx->pc = 0x2e8540u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294941792)));
    // 0x2e8544: 0x2402ffff
    ctx->pc = 0x2e8544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8548: 0x12020125
    ctx->pc = 0x2E8548u;
    {
        const bool branch_taken_0x2e8548 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2E854Cu;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2e8548) {
            ctx->pc = 0x2E89E0u;
            goto label_2e89e0;
        }
    }
    ctx->pc = 0x2E8550u;
    // 0x2e8550: 0xc0bb2f2
    ctx->pc = 0x2E8550u;
    SET_GPR_U32(ctx, 31, 0x2E8558u);
    ctx->pc = 0x2E8554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2ECBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x2ecbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8558u; }
    }
    if (ctx->pc != 0x2E8558u) { return; }
    ctx->pc = 0x2E8558u;
    // 0x2e8558: 0x14400122
    ctx->pc = 0x2E8558u;
    {
        const bool branch_taken_0x2e8558 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E855Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x2e8558) {
            ctx->pc = 0x2E89E4u;
            goto label_2e89e4;
        }
    }
    ctx->pc = 0x2E8560u;
    // 0x2e8560: 0xc0bb2f2
    ctx->pc = 0x2E8560u;
    SET_GPR_U32(ctx, 31, 0x2E8568u);
    ctx->pc = 0x2E8564u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2ECBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x2ecbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8568u; }
    }
    if (ctx->pc != 0x2E8568u) { return; }
    ctx->pc = 0x2E8568u;
    // 0x2e8568: 0x10400023
    ctx->pc = 0x2E8568u;
    {
        const bool branch_taken_0x2e8568 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e8568) {
            ctx->pc = 0x2E85F8u;
            goto label_2e85f8;
        }
    }
    ctx->pc = 0x2E8570u;
    // 0x2e8570: 0x44800000
    ctx->pc = 0x2e8570u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2e8574: 0x4600a032
    ctx->pc = 0x2e8574u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e8578: 0x0
    ctx->pc = 0x2e8578u;
    // NOP
    // 0x2e857c: 0x45000118
    ctx->pc = 0x2E857Cu;
    {
        const bool branch_taken_0x2e857c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8580u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2e857c) {
            ctx->pc = 0x2E89E0u;
            goto label_2e89e0;
        }
    }
    ctx->pc = 0x2E8584u;
    // 0x2e8584: 0x24030001
    ctx->pc = 0x2e8584u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8588: 0x24429390
    ctx->pc = 0x2e8588u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x2e858c: 0xafa30000
    ctx->pc = 0x2e858cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e8590: 0xafa20004
    ctx->pc = 0x2e8590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e8594: 0x4600bb06
    ctx->pc = 0x2e8594u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2e8598: 0xc0be862
    ctx->pc = 0x2E8598u;
    SET_GPR_U32(ctx, 31, 0x2E85A0u);
    ctx->pc = 0x2E859Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E85A0u; }
    }
    if (ctx->pc != 0x2E85A0u) { return; }
    ctx->pc = 0x2E85A0u;
    // 0x2e85a0: 0x4600a306
    ctx->pc = 0x2e85a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e85a4: 0xc0be862
    ctx->pc = 0x2E85A4u;
    SET_GPR_U32(ctx, 31, 0x2E85ACu);
    ctx->pc = 0x2E85A8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E85ACu; }
    }
    if (ctx->pc != 0x2E85ACu) { return; }
    ctx->pc = 0x2E85ACu;
    // 0x2e85ac: 0xffa20010
    ctx->pc = 0x2e85acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2e85b0: 0xc0be862
    ctx->pc = 0x2E85B0u;
    SET_GPR_U32(ctx, 31, 0x2E85B8u);
    ctx->pc = 0x2E85B4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E85B8u; }
    }
    if (ctx->pc != 0x2E85B8u) { return; }
    ctx->pc = 0x2E85B8u;
    // 0x2e85b8: 0xffa20018
    ctx->pc = 0x2e85b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x2e85bc: 0x24020002
    ctx->pc = 0x2e85bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e85c0: 0x16020005
    ctx->pc = 0x2E85C0u;
    {
        const bool branch_taken_0x2e85c0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x2e85c0) {
            ctx->pc = 0x2E85D8u;
            goto label_2e85d8;
        }
    }
    ctx->pc = 0x2E85C8u;
label_2e85c8:
    // 0x2e85c8: 0x3402ffc0
    ctx->pc = 0x2e85c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65472));
    // 0x2e85cc: 0x213bc
    ctx->pc = 0x2e85ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x2e85d0: 0x100000f8
    ctx->pc = 0x2E85D0u;
    {
        const bool branch_taken_0x2e85d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E85D4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        if (branch_taken_0x2e85d0) {
            ctx->pc = 0x2E89B4u;
            goto label_2e89b4;
        }
    }
    ctx->pc = 0x2E85D8u;
label_2e85d8:
    // 0x2e85d8: 0xc0bb1f0
    ctx->pc = 0x2E85D8u;
    SET_GPR_U32(ctx, 31, 0x2E85E0u);
    ctx->pc = 0x2E85DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x2ec7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E85E0u; }
    }
    if (ctx->pc != 0x2E85E0u) { return; }
    ctx->pc = 0x2E85E0u;
    // 0x2e85e0: 0x144000f5
    ctx->pc = 0x2E85E0u;
    {
        const bool branch_taken_0x2e85e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E85E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2e85e0) {
            ctx->pc = 0x2E89B8u;
            goto label_2e89b8;
        }
    }
    ctx->pc = 0x2E85E8u;
    // 0x2e85e8: 0xc0be8b2
    ctx->pc = 0x2E85E8u;
    SET_GPR_U32(ctx, 31, 0x2E85F0u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E85F0u; }
    }
    if (ctx->pc != 0x2E85F0u) { return; }
    ctx->pc = 0x2E85F0u;
    // 0x2e85f0: 0x100000ef
    ctx->pc = 0x2E85F0u;
    {
        const bool branch_taken_0x2e85f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E85F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
        if (branch_taken_0x2e85f0) {
            ctx->pc = 0x2E89B0u;
            goto label_2e89b0;
        }
    }
    ctx->pc = 0x2E85F8u;
label_2e85f8:
    // 0x2e85f8: 0x4480b000
    ctx->pc = 0x2e85f8u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x2e85fc: 0x4616b832
    ctx->pc = 0x2e85fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e8600: 0x45000043
    ctx->pc = 0x2E8600u;
    {
        const bool branch_taken_0x2e8600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e8600) {
            ctx->pc = 0x2E8710u;
            goto label_2e8710;
        }
    }
    ctx->pc = 0x2E8608u;
    // 0x2e8608: 0x4616a032
    ctx->pc = 0x2e8608u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e860c: 0x0
    ctx->pc = 0x2e860cu;
    // NOP
    // 0x2e8610: 0x45000017
    ctx->pc = 0x2E8610u;
    {
        const bool branch_taken_0x2e8610 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8614u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2e8610) {
            ctx->pc = 0x2E8670u;
            goto label_2e8670;
        }
    }
    ctx->pc = 0x2E8618u;
    // 0x2e8618: 0x24030001
    ctx->pc = 0x2e8618u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e861c: 0x24429390
    ctx->pc = 0x2e861cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x2e8620: 0xafa30000
    ctx->pc = 0x2e8620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e8624: 0xafa20004
    ctx->pc = 0x2e8624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e8628: 0x4600bb06
    ctx->pc = 0x2e8628u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2e862c: 0xc0be862
    ctx->pc = 0x2E862Cu;
    SET_GPR_U32(ctx, 31, 0x2E8634u);
    ctx->pc = 0x2E8630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8634u; }
    }
    if (ctx->pc != 0x2E8634u) { return; }
    ctx->pc = 0x2E8634u;
    // 0x2e8634: 0x4600a306
    ctx->pc = 0x2e8634u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e8638: 0xc0be862
    ctx->pc = 0x2E8638u;
    SET_GPR_U32(ctx, 31, 0x2E8640u);
    ctx->pc = 0x2E863Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8640u; }
    }
    if (ctx->pc != 0x2E8640u) { return; }
    ctx->pc = 0x2E8640u;
    // 0x2e8640: 0xffa20010
    ctx->pc = 0x2e8640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2e8644: 0x102d
    ctx->pc = 0x2e8644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8648: 0x1600ffdf
    ctx->pc = 0x2E8648u;
    {
        const bool branch_taken_0x2e8648 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E864Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        if (branch_taken_0x2e8648) {
            ctx->pc = 0x2E85C8u;
            goto label_2e85c8;
        }
    }
    ctx->pc = 0x2E8650u;
    // 0x2e8650: 0xc0bb1f0
    ctx->pc = 0x2E8650u;
    SET_GPR_U32(ctx, 31, 0x2E8658u);
    ctx->pc = 0x2E8654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x2ec7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8658u; }
    }
    if (ctx->pc != 0x2E8658u) { return; }
    ctx->pc = 0x2E8658u;
    // 0x2e8658: 0x144000d7
    ctx->pc = 0x2E8658u;
    {
        const bool branch_taken_0x2e8658 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E865Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2e8658) {
            ctx->pc = 0x2E89B8u;
            goto label_2e89b8;
        }
    }
    ctx->pc = 0x2E8660u;
    // 0x2e8660: 0xc0be8b2
    ctx->pc = 0x2E8660u;
    SET_GPR_U32(ctx, 31, 0x2E8668u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8668u; }
    }
    if (ctx->pc != 0x2E8668u) { return; }
    ctx->pc = 0x2E8668u;
    // 0x2e8668: 0x100000d1
    ctx->pc = 0x2E8668u;
    {
        const bool branch_taken_0x2e8668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E866Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
        if (branch_taken_0x2e8668) {
            ctx->pc = 0x2E89B0u;
            goto label_2e89b0;
        }
    }
    ctx->pc = 0x2E8670u;
label_2e8670:
    // 0x2e8670: 0xc0bb2e8
    ctx->pc = 0x2E8670u;
    SET_GPR_U32(ctx, 31, 0x2E8678u);
    ctx->pc = 0x2E8674u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2ECBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        finitef_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8678u; }
    }
    if (ctx->pc != 0x2E8678u) { return; }
    ctx->pc = 0x2E8678u;
    // 0x2e8678: 0x104000da
    ctx->pc = 0x2E8678u;
    {
        const bool branch_taken_0x2e8678 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E867Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x2e8678) {
            ctx->pc = 0x2E89E4u;
            goto label_2e89e4;
        }
    }
    ctx->pc = 0x2E8680u;
    // 0x2e8680: 0x4616a034
    ctx->pc = 0x2e8680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e8684: 0x0
    ctx->pc = 0x2e8684u;
    // NOP
    // 0x2e8688: 0x450000d6
    ctx->pc = 0x2E8688u;
    {
        const bool branch_taken_0x2e8688 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E868Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2e8688) {
            ctx->pc = 0x2E89E4u;
            goto label_2e89e4;
        }
    }
    ctx->pc = 0x2E8690u;
    // 0x2e8690: 0x24030001
    ctx->pc = 0x2e8690u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8694: 0x24429390
    ctx->pc = 0x2e8694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x2e8698: 0xafa30000
    ctx->pc = 0x2e8698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e869c: 0xafa20004
    ctx->pc = 0x2e869cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e86a0: 0x4600bb06
    ctx->pc = 0x2e86a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2e86a4: 0xc0be862
    ctx->pc = 0x2E86A4u;
    SET_GPR_U32(ctx, 31, 0x2E86ACu);
    ctx->pc = 0x2E86A8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E86ACu; }
    }
    if (ctx->pc != 0x2E86ACu) { return; }
    ctx->pc = 0x2E86ACu;
    // 0x2e86ac: 0x4600a306
    ctx->pc = 0x2e86acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e86b0: 0xc0be862
    ctx->pc = 0x2E86B0u;
    SET_GPR_U32(ctx, 31, 0x2E86B8u);
    ctx->pc = 0x2E86B4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E86B8u; }
    }
    if (ctx->pc != 0x2E86B8u) { return; }
    ctx->pc = 0x2E86B8u;
    // 0x2e86b8: 0x16000004
    ctx->pc = 0x2E86B8u;
    {
        const bool branch_taken_0x2e86b8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E86BCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x2e86b8) {
            ctx->pc = 0x2E86CCu;
            goto label_2e86cc;
        }
    }
    ctx->pc = 0x2E86C0u;
    // 0x2e86c0: 0x202d
    ctx->pc = 0x2e86c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e86c4: 0x10000006
    ctx->pc = 0x2E86C4u;
    {
        const bool branch_taken_0x2e86c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E86C8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
        if (branch_taken_0x2e86c4) {
            ctx->pc = 0x2E86E0u;
            goto label_2e86e0;
        }
    }
    ctx->pc = 0x2E86CCu;
label_2e86cc:
    // 0x2e86cc: 0x3c02003c
    ctx->pc = 0x2e86ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2e86d0: 0x202d
    ctx->pc = 0x2e86d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e86d4: 0xc0be356
    ctx->pc = 0x2E86D4u;
    SET_GPR_U32(ctx, 31, 0x2E86DCu);
    ctx->pc = 0x2E86D8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294941784)));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E86DCu; }
    }
    if (ctx->pc != 0x2E86DCu) { return; }
    ctx->pc = 0x2E86DCu;
    // 0x2e86dc: 0xffa20018
    ctx->pc = 0x2e86dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2e86e0:
    // 0x2e86e0: 0x8e639c60
    ctx->pc = 0x2e86e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294941792)));
    // 0x2e86e4: 0x24020002
    ctx->pc = 0x2e86e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e86e8: 0x10620005
    ctx->pc = 0x2E86E8u;
    {
        const bool branch_taken_0x2e86e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2e86e8) {
            ctx->pc = 0x2E8700u;
            goto label_2e8700;
        }
    }
    ctx->pc = 0x2E86F0u;
    // 0x2e86f0: 0xc0bb1f0
    ctx->pc = 0x2E86F0u;
    SET_GPR_U32(ctx, 31, 0x2E86F8u);
    ctx->pc = 0x2E86F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x2ec7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E86F8u; }
    }
    if (ctx->pc != 0x2E86F8u) { return; }
    ctx->pc = 0x2E86F8u;
    // 0x2e86f8: 0x144000af
    ctx->pc = 0x2E86F8u;
    {
        const bool branch_taken_0x2e86f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E86FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2e86f8) {
            ctx->pc = 0x2E89B8u;
            goto label_2e89b8;
        }
    }
    ctx->pc = 0x2E8700u;
label_2e8700:
    // 0x2e8700: 0xc0be8b2
    ctx->pc = 0x2E8700u;
    SET_GPR_U32(ctx, 31, 0x2E8708u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8708u; }
    }
    if (ctx->pc != 0x2E8708u) { return; }
    ctx->pc = 0x2E8708u;
    // 0x2e8708: 0x100000a9
    ctx->pc = 0x2E8708u;
    {
        const bool branch_taken_0x2e8708 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E870Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
        if (branch_taken_0x2e8708) {
            ctx->pc = 0x2E89B0u;
            goto label_2e89b0;
        }
    }
    ctx->pc = 0x2E8710u;
label_2e8710:
    // 0x2e8710: 0xc0bb2e8
    ctx->pc = 0x2E8710u;
    SET_GPR_U32(ctx, 31, 0x2E8718u);
    ctx->pc = 0x2E8714u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2ECBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        finitef_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8718u; }
    }
    if (ctx->pc != 0x2E8718u) { return; }
    ctx->pc = 0x2E8718u;
    // 0x2e8718: 0x14400080
    ctx->pc = 0x2E8718u;
    {
        const bool branch_taken_0x2e8718 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2e8718) {
            ctx->pc = 0x2E891Cu;
            goto label_2e891c;
        }
    }
    ctx->pc = 0x2E8720u;
    // 0x2e8720: 0xc0bb2e8
    ctx->pc = 0x2E8720u;
    SET_GPR_U32(ctx, 31, 0x2E8728u);
    ctx->pc = 0x2E8724u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2ECBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        finitef_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8728u; }
    }
    if (ctx->pc != 0x2E8728u) { return; }
    ctx->pc = 0x2E8728u;
    // 0x2e8728: 0x1040007c
    ctx->pc = 0x2E8728u;
    {
        const bool branch_taken_0x2e8728 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e8728) {
            ctx->pc = 0x2E891Cu;
            goto label_2e891c;
        }
    }
    ctx->pc = 0x2E8730u;
    // 0x2e8730: 0xc0bb2e8
    ctx->pc = 0x2E8730u;
    SET_GPR_U32(ctx, 31, 0x2E8738u);
    ctx->pc = 0x2E8734u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2ECBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        finitef_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8738u; }
    }
    if (ctx->pc != 0x2E8738u) { return; }
    ctx->pc = 0x2E8738u;
    // 0x2e8738: 0x10400078
    ctx->pc = 0x2E8738u;
    {
        const bool branch_taken_0x2e8738 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e8738) {
            ctx->pc = 0x2E891Cu;
            goto label_2e891c;
        }
    }
    ctx->pc = 0x2E8740u;
    // 0x2e8740: 0xc0bb2f2
    ctx->pc = 0x2E8740u;
    SET_GPR_U32(ctx, 31, 0x2E8748u);
    ctx->pc = 0x2E8744u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2ECBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x2ecbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8748u; }
    }
    if (ctx->pc != 0x2E8748u) { return; }
    ctx->pc = 0x2E8748u;
    // 0x2e8748: 0x1040001f
    ctx->pc = 0x2E8748u;
    {
        const bool branch_taken_0x2e8748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E874Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2e8748) {
            ctx->pc = 0x2E87C8u;
            goto label_2e87c8;
        }
    }
    ctx->pc = 0x2E8750u;
    // 0x2e8750: 0x24030001
    ctx->pc = 0x2e8750u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8754: 0x24429390
    ctx->pc = 0x2e8754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x2e8758: 0xafa30000
    ctx->pc = 0x2e8758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e875c: 0xafa20004
    ctx->pc = 0x2e875cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e8760: 0x4600bb06
    ctx->pc = 0x2e8760u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2e8764: 0xc0be862
    ctx->pc = 0x2E8764u;
    SET_GPR_U32(ctx, 31, 0x2E876Cu);
    ctx->pc = 0x2E8768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E876Cu; }
    }
    if (ctx->pc != 0x2E876Cu) { return; }
    ctx->pc = 0x2E876Cu;
    // 0x2e876c: 0x4600a306
    ctx->pc = 0x2e876cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e8770: 0xc0be862
    ctx->pc = 0x2E8770u;
    SET_GPR_U32(ctx, 31, 0x2E8778u);
    ctx->pc = 0x2E8774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8778u; }
    }
    if (ctx->pc != 0x2E8778u) { return; }
    ctx->pc = 0x2E8778u;
    // 0x2e8778: 0x16000004
    ctx->pc = 0x2E8778u;
    {
        const bool branch_taken_0x2e8778 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E877Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x2e8778) {
            ctx->pc = 0x2E878Cu;
            goto label_2e878c;
        }
    }
    ctx->pc = 0x2E8780u;
    // 0x2e8780: 0x102d
    ctx->pc = 0x2e8780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8784: 0x10000004
    ctx->pc = 0x2E8784u;
    {
        const bool branch_taken_0x2e8784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E8788u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        if (branch_taken_0x2e8784) {
            ctx->pc = 0x2E8798u;
            goto label_2e8798;
        }
    }
    ctx->pc = 0x2E878Cu;
label_2e878c:
    // 0x2e878c: 0x3c02003c
    ctx->pc = 0x2e878cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2e8790: 0xdc439398
    ctx->pc = 0x2e8790u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294939544)));
    // 0x2e8794: 0xffa30018
    ctx->pc = 0x2e8794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2e8798:
    // 0x2e8798: 0x8e639c60
    ctx->pc = 0x2e8798u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294941792)));
    // 0x2e879c: 0x24020002
    ctx->pc = 0x2e879cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e87a0: 0x10620005
    ctx->pc = 0x2E87A0u;
    {
        const bool branch_taken_0x2e87a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2e87a0) {
            ctx->pc = 0x2E87B8u;
            goto label_2e87b8;
        }
    }
    ctx->pc = 0x2E87A8u;
    // 0x2e87a8: 0xc0bb1f0
    ctx->pc = 0x2E87A8u;
    SET_GPR_U32(ctx, 31, 0x2E87B0u);
    ctx->pc = 0x2E87ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x2ec7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E87B0u; }
    }
    if (ctx->pc != 0x2E87B0u) { return; }
    ctx->pc = 0x2E87B0u;
    // 0x2e87b0: 0x14400081
    ctx->pc = 0x2E87B0u;
    {
        const bool branch_taken_0x2e87b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E87B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2e87b0) {
            ctx->pc = 0x2E89B8u;
            goto label_2e89b8;
        }
    }
    ctx->pc = 0x2E87B8u;
label_2e87b8:
    // 0x2e87b8: 0xc0be8b2
    ctx->pc = 0x2E87B8u;
    SET_GPR_U32(ctx, 31, 0x2E87C0u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E87C0u; }
    }
    if (ctx->pc != 0x2E87C0u) { return; }
    ctx->pc = 0x2E87C0u;
    // 0x2e87c0: 0x1000007b
    ctx->pc = 0x2E87C0u;
    {
        const bool branch_taken_0x2e87c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E87C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
        if (branch_taken_0x2e87c0) {
            ctx->pc = 0x2E89B0u;
            goto label_2e89b0;
        }
    }
    ctx->pc = 0x2E87C8u;
label_2e87c8:
    // 0x2e87c8: 0x24030003
    ctx->pc = 0x2e87c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e87cc: 0x24429390
    ctx->pc = 0x2e87ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x2e87d0: 0xafa30000
    ctx->pc = 0x2e87d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e87d4: 0xafa20004
    ctx->pc = 0x2e87d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e87d8: 0x4600bb06
    ctx->pc = 0x2e87d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2e87dc: 0xc0be862
    ctx->pc = 0x2E87DCu;
    SET_GPR_U32(ctx, 31, 0x2E87E4u);
    ctx->pc = 0x2E87E0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E87E4u; }
    }
    if (ctx->pc != 0x2E87E4u) { return; }
    ctx->pc = 0x2E87E4u;
    // 0x2e87e4: 0x4600a306
    ctx->pc = 0x2e87e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e87e8: 0xc0be862
    ctx->pc = 0x2E87E8u;
    SET_GPR_U32(ctx, 31, 0x2E87F0u);
    ctx->pc = 0x2E87ECu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E87F0u; }
    }
    if (ctx->pc != 0x2E87F0u) { return; }
    ctx->pc = 0x2E87F0u;
    // 0x2e87f0: 0x16000024
    ctx->pc = 0x2E87F0u;
    {
        const bool branch_taken_0x2e87f0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E87F4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x2e87f0) {
            ctx->pc = 0x2E8884u;
            goto label_2e8884;
        }
    }
    ctx->pc = 0x2E87F8u;
    // 0x2e87f8: 0x3c01003c
    ctx->pc = 0x2e87f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x2e87fc: 0xdc2293a0
    ctx->pc = 0x2e87fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294939552)));
    // 0x2e8800: 0x4600a306
    ctx->pc = 0x2e8800u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e8804: 0xc0be862
    ctx->pc = 0x2E8804u;
    SET_GPR_U32(ctx, 31, 0x2E880Cu);
    ctx->pc = 0x2E8808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E880Cu; }
    }
    if (ctx->pc != 0x2E880Cu) { return; }
    ctx->pc = 0x2E880Cu;
    // 0x2e880c: 0x3405ff80
    ctx->pc = 0x2e880cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x2e8810: 0x52bbc
    ctx->pc = 0x2e8810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2e8814: 0xc0be370
    ctx->pc = 0x2E8814u;
    SET_GPR_U32(ctx, 31, 0x2E881Cu);
    ctx->pc = 0x2E8818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E881Cu; }
    }
    if (ctx->pc != 0x2E881Cu) { return; }
    ctx->pc = 0x2E881Cu;
    // 0x2e881c: 0xc0be564
    ctx->pc = 0x2E881Cu;
    SET_GPR_U32(ctx, 31, 0x2E8824u);
    ctx->pc = 0x2E8820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8824u; }
    }
    if (ctx->pc != 0x2E8824u) { return; }
    ctx->pc = 0x2E8824u;
    // 0x2e8824: 0x46000506
    ctx->pc = 0x2e8824u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e8828: 0xc0be862
    ctx->pc = 0x2E8828u;
    SET_GPR_U32(ctx, 31, 0x2E8830u);
    ctx->pc = 0x2E882Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8830u; }
    }
    if (ctx->pc != 0x2E8830u) { return; }
    ctx->pc = 0x2E8830u;
    // 0x2e8830: 0x40202d
    ctx->pc = 0x2e8830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8834: 0xc0be4ba
    ctx->pc = 0x2E8834u;
    SET_GPR_U32(ctx, 31, 0x2E883Cu);
    ctx->pc = 0x2E8838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E883Cu; }
    }
    if (ctx->pc != 0x2E883Cu) { return; }
    ctx->pc = 0x2E883Cu;
    // 0x2e883c: 0x4410035
    ctx->pc = 0x2E883Cu;
    {
        const bool branch_taken_0x2e883c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E8840u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294941792)));
        if (branch_taken_0x2e883c) {
            ctx->pc = 0x2E8914u;
            goto label_2e8914;
        }
    }
    ctx->pc = 0x2E8844u;
    // 0x2e8844: 0xc0be862
    ctx->pc = 0x2E8844u;
    SET_GPR_U32(ctx, 31, 0x2E884Cu);
    ctx->pc = 0x2E8848u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E884Cu; }
    }
    if (ctx->pc != 0x2E884Cu) { return; }
    ctx->pc = 0x2E884Cu;
    // 0x2e884c: 0xc0bb1fa
    ctx->pc = 0x2E884Cu;
    SET_GPR_U32(ctx, 31, 0x2E8854u);
    ctx->pc = 0x2E8850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        rint_0x2ec7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8854u; }
    }
    if (ctx->pc != 0x2E8854u) { return; }
    ctx->pc = 0x2E8854u;
    // 0x2e8854: 0x40802d
    ctx->pc = 0x2e8854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8858: 0xc0be862
    ctx->pc = 0x2E8858u;
    SET_GPR_U32(ctx, 31, 0x2E8860u);
    ctx->pc = 0x2E885Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8860u; }
    }
    if (ctx->pc != 0x2E8860u) { return; }
    ctx->pc = 0x2E8860u;
    // 0x2e8860: 0x200202d
    ctx->pc = 0x2e8860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8864: 0xc0be4ba
    ctx->pc = 0x2E8864u;
    SET_GPR_U32(ctx, 31, 0x2E886Cu);
    ctx->pc = 0x2E8868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E886Cu; }
    }
    if (ctx->pc != 0x2E886Cu) { return; }
    ctx->pc = 0x2E886Cu;
    // 0x2e886c: 0x10400029
    ctx->pc = 0x2E886Cu;
    {
        const bool branch_taken_0x2e886c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E8870u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294941792)));
        if (branch_taken_0x2e886c) {
            ctx->pc = 0x2E8914u;
            goto label_2e8914;
        }
    }
    ctx->pc = 0x2E8874u;
    // 0x2e8874: 0x3c01003c
    ctx->pc = 0x2e8874u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x2e8878: 0xdc2293a8
    ctx->pc = 0x2e8878u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294939560)));
    // 0x2e887c: 0x10000025
    ctx->pc = 0x2E887Cu;
    {
        const bool branch_taken_0x2e887c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E8880u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        if (branch_taken_0x2e887c) {
            ctx->pc = 0x2E8914u;
            goto label_2e8914;
        }
    }
    ctx->pc = 0x2E8884u;
label_2e8884:
    // 0x2e8884: 0x3c02003c
    ctx->pc = 0x2e8884u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2e8888: 0x4600a306
    ctx->pc = 0x2e8888u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e888c: 0xdc519c58
    ctx->pc = 0x2e888cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 4294941784)));
    // 0x2e8890: 0x902d
    ctx->pc = 0x2e8890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8894: 0xc0be862
    ctx->pc = 0x2E8894u;
    SET_GPR_U32(ctx, 31, 0x2E889Cu);
    ctx->pc = 0x2E8898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E889Cu; }
    }
    if (ctx->pc != 0x2E889Cu) { return; }
    ctx->pc = 0x2E889Cu;
    // 0x2e889c: 0x3405ff80
    ctx->pc = 0x2e889cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x2e88a0: 0x52bbc
    ctx->pc = 0x2e88a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2e88a4: 0xc0be370
    ctx->pc = 0x2E88A4u;
    SET_GPR_U32(ctx, 31, 0x2E88ACu);
    ctx->pc = 0x2E88A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88ACu; }
    }
    if (ctx->pc != 0x2E88ACu) { return; }
    ctx->pc = 0x2E88ACu;
    // 0x2e88ac: 0xc0be564
    ctx->pc = 0x2E88ACu;
    SET_GPR_U32(ctx, 31, 0x2E88B4u);
    ctx->pc = 0x2E88B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88B4u; }
    }
    if (ctx->pc != 0x2E88B4u) { return; }
    ctx->pc = 0x2E88B4u;
    // 0x2e88b4: 0x46000506
    ctx->pc = 0x2e88b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e88b8: 0xc0be862
    ctx->pc = 0x2E88B8u;
    SET_GPR_U32(ctx, 31, 0x2E88C0u);
    ctx->pc = 0x2E88BCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88C0u; }
    }
    if (ctx->pc != 0x2E88C0u) { return; }
    ctx->pc = 0x2E88C0u;
    // 0x2e88c0: 0x40202d
    ctx->pc = 0x2e88c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e88c4: 0xc0be4ba
    ctx->pc = 0x2E88C4u;
    SET_GPR_U32(ctx, 31, 0x2E88CCu);
    ctx->pc = 0x2E88C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88CCu; }
    }
    if (ctx->pc != 0x2E88CCu) { return; }
    ctx->pc = 0x2E88CCu;
    // 0x2e88cc: 0x4410011
    ctx->pc = 0x2E88CCu;
    {
        const bool branch_taken_0x2e88cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E88D0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294941792)));
        if (branch_taken_0x2e88cc) {
            ctx->pc = 0x2E8914u;
            goto label_2e8914;
        }
    }
    ctx->pc = 0x2E88D4u;
    // 0x2e88d4: 0xc0be862
    ctx->pc = 0x2E88D4u;
    SET_GPR_U32(ctx, 31, 0x2E88DCu);
    ctx->pc = 0x2E88D8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88DCu; }
    }
    if (ctx->pc != 0x2E88DCu) { return; }
    ctx->pc = 0x2E88DCu;
    // 0x2e88dc: 0xc0bb1fa
    ctx->pc = 0x2E88DCu;
    SET_GPR_U32(ctx, 31, 0x2E88E4u);
    ctx->pc = 0x2E88E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        rint_0x2ec7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88E4u; }
    }
    if (ctx->pc != 0x2E88E4u) { return; }
    ctx->pc = 0x2E88E4u;
    // 0x2e88e4: 0x40802d
    ctx->pc = 0x2e88e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e88e8: 0xc0be862
    ctx->pc = 0x2E88E8u;
    SET_GPR_U32(ctx, 31, 0x2E88F0u);
    ctx->pc = 0x2E88ECu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88F0u; }
    }
    if (ctx->pc != 0x2E88F0u) { return; }
    ctx->pc = 0x2E88F0u;
    // 0x2e88f0: 0x200202d
    ctx->pc = 0x2e88f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e88f4: 0xc0be4ba
    ctx->pc = 0x2E88F4u;
    SET_GPR_U32(ctx, 31, 0x2E88FCu);
    ctx->pc = 0x2E88F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88FCu; }
    }
    if (ctx->pc != 0x2E88FCu) { return; }
    ctx->pc = 0x2E88FCu;
    // 0x2e88fc: 0x10400004
    ctx->pc = 0x2E88FCu;
    {
        const bool branch_taken_0x2e88fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E8900u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2e88fc) {
            ctx->pc = 0x2E8910u;
            goto label_2e8910;
        }
    }
    ctx->pc = 0x2E8904u;
    // 0x2e8904: 0xc0be356
    ctx->pc = 0x2E8904u;
    SET_GPR_U32(ctx, 31, 0x2E890Cu);
    ctx->pc = 0x2E8908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E890Cu; }
    }
    if (ctx->pc != 0x2E890Cu) { return; }
    ctx->pc = 0x2E890Cu;
    // 0x2e890c: 0xffa20018
    ctx->pc = 0x2e890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2e8910:
    // 0x2e8910: 0x8e639c60
    ctx->pc = 0x2e8910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294941792)));
label_2e8914:
    // 0x2e8914: 0x1000001d
    ctx->pc = 0x2E8914u;
    {
        const bool branch_taken_0x2e8914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E8918u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2e8914) {
            ctx->pc = 0x2E898Cu;
            goto label_2e898c;
        }
    }
    ctx->pc = 0x2E891Cu;
label_2e891c:
    // 0x2e891c: 0x44800000
    ctx->pc = 0x2e891cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2e8920: 0x4600a832
    ctx->pc = 0x2e8920u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e8924: 0x0
    ctx->pc = 0x2e8924u;
    // NOP
    // 0x2e8928: 0x4500002e
    ctx->pc = 0x2E8928u;
    {
        const bool branch_taken_0x2e8928 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E892Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x2e8928) {
            ctx->pc = 0x2E89E4u;
            goto label_2e89e4;
        }
    }
    ctx->pc = 0x2E8930u;
    // 0x2e8930: 0xc0bb2e8
    ctx->pc = 0x2E8930u;
    SET_GPR_U32(ctx, 31, 0x2E8938u);
    ctx->pc = 0x2E8934u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2ECBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        finitef_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8938u; }
    }
    if (ctx->pc != 0x2E8938u) { return; }
    ctx->pc = 0x2E8938u;
    // 0x2e8938: 0x1040002a
    ctx->pc = 0x2E8938u;
    {
        const bool branch_taken_0x2e8938 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E893Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x2e8938) {
            ctx->pc = 0x2E89E4u;
            goto label_2e89e4;
        }
    }
    ctx->pc = 0x2E8940u;
    // 0x2e8940: 0xc0bb2e8
    ctx->pc = 0x2E8940u;
    SET_GPR_U32(ctx, 31, 0x2E8948u);
    ctx->pc = 0x2E8944u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2ECBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        finitef_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8948u; }
    }
    if (ctx->pc != 0x2E8948u) { return; }
    ctx->pc = 0x2E8948u;
    // 0x2e8948: 0x10400025
    ctx->pc = 0x2E8948u;
    {
        const bool branch_taken_0x2e8948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E894Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2e8948) {
            ctx->pc = 0x2E89E0u;
            goto label_2e89e0;
        }
    }
    ctx->pc = 0x2E8950u;
    // 0x2e8950: 0x24030004
    ctx->pc = 0x2e8950u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e8954: 0x24429390
    ctx->pc = 0x2e8954u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x2e8958: 0xafa30000
    ctx->pc = 0x2e8958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e895c: 0xafa20004
    ctx->pc = 0x2e895cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e8960: 0x4600bb06
    ctx->pc = 0x2e8960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2e8964: 0xc0be862
    ctx->pc = 0x2E8964u;
    SET_GPR_U32(ctx, 31, 0x2E896Cu);
    ctx->pc = 0x2E8968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E896Cu; }
    }
    if (ctx->pc != 0x2E896Cu) { return; }
    ctx->pc = 0x2E896Cu;
    // 0x2e896c: 0x4600a306
    ctx->pc = 0x2e896cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e8970: 0xc0be862
    ctx->pc = 0x2E8970u;
    SET_GPR_U32(ctx, 31, 0x2E8978u);
    ctx->pc = 0x2E8974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8978u; }
    }
    if (ctx->pc != 0x2E8978u) { return; }
    ctx->pc = 0x2E8978u;
    // 0x2e8978: 0x202d
    ctx->pc = 0x2e8978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e897c: 0xffa20010
    ctx->pc = 0x2e897cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2e8980: 0x8e639c60
    ctx->pc = 0x2e8980u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294941792)));
    // 0x2e8984: 0x24020002
    ctx->pc = 0x2e8984u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8988: 0xffa40018
    ctx->pc = 0x2e8988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_2e898c:
    // 0x2e898c: 0x10620005
    ctx->pc = 0x2E898Cu;
    {
        const bool branch_taken_0x2e898c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2e898c) {
            ctx->pc = 0x2E89A4u;
            goto label_2e89a4;
        }
    }
    ctx->pc = 0x2E8994u;
    // 0x2e8994: 0xc0bb1f0
    ctx->pc = 0x2E8994u;
    SET_GPR_U32(ctx, 31, 0x2E899Cu);
    ctx->pc = 0x2E8998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x2ec7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E899Cu; }
    }
    if (ctx->pc != 0x2E899Cu) { return; }
    ctx->pc = 0x2E899Cu;
    // 0x2e899c: 0x14400006
    ctx->pc = 0x2E899Cu;
    {
        const bool branch_taken_0x2e899c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E89A0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2e899c) {
            ctx->pc = 0x2E89B8u;
            goto label_2e89b8;
        }
    }
    ctx->pc = 0x2E89A4u;
label_2e89a4:
    // 0x2e89a4: 0xc0be8b2
    ctx->pc = 0x2E89A4u;
    SET_GPR_U32(ctx, 31, 0x2E89ACu);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89ACu; }
    }
    if (ctx->pc != 0x2E89ACu) { return; }
    ctx->pc = 0x2E89ACu;
    // 0x2e89ac: 0x24030022
    ctx->pc = 0x2e89acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
label_2e89b0:
    // 0x2e89b0: 0xac430000
    ctx->pc = 0x2e89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e89b4:
    // 0x2e89b4: 0x8fa20020
    ctx->pc = 0x2e89b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e89b8:
    // 0x2e89b8: 0x10400005
    ctx->pc = 0x2E89B8u;
    {
        const bool branch_taken_0x2e89b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e89b8) {
            ctx->pc = 0x2E89D0u;
            goto label_2e89d0;
        }
    }
    ctx->pc = 0x2E89C0u;
    // 0x2e89c0: 0xc0be8b2
    ctx->pc = 0x2E89C0u;
    SET_GPR_U32(ctx, 31, 0x2E89C8u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89C8u; }
    }
    if (ctx->pc != 0x2E89C8u) { return; }
    ctx->pc = 0x2E89C8u;
    // 0x2e89c8: 0x8fa30020
    ctx->pc = 0x2e89c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e89cc: 0xac430000
    ctx->pc = 0x2e89ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e89d0:
    // 0x2e89d0: 0xc0be564
    ctx->pc = 0x2E89D0u;
    SET_GPR_U32(ctx, 31, 0x2E89D8u);
    ctx->pc = 0x2E89D4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89D8u; }
    }
    if (ctx->pc != 0x2E89D8u) { return; }
    ctx->pc = 0x2E89D8u;
    // 0x2e89d8: 0x10000003
    ctx->pc = 0x2E89D8u;
    {
        const bool branch_taken_0x2e89d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E89DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2e89d8) {
            ctx->pc = 0x2E89E8u;
            goto label_2e89e8;
        }
    }
    ctx->pc = 0x2E89E0u;
label_2e89e0:
    // 0x2e89e0: 0x4600a806
    ctx->pc = 0x2e89e0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_2e89e4:
    // 0x2e89e4: 0xdfbf0070
    ctx->pc = 0x2e89e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e89e8:
    // 0x2e89e8: 0xdfb30060
    ctx->pc = 0x2e89e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e89ec: 0xdfb20050
    ctx->pc = 0x2e89ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e89f0: 0xdfb10040
    ctx->pc = 0x2e89f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e89f4: 0xdfb00030
    ctx->pc = 0x2e89f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e89f8: 0xc7b70098
    ctx->pc = 0x2e89f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e89fc: 0xc7b60090
    ctx->pc = 0x2e89fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e8a00: 0xc7b50088
    ctx->pc = 0x2e8a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e8a04: 0xc7b40080
    ctx->pc = 0x2e8a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e8a08: 0x3e00008
    ctx->pc = 0x2E8A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8A0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E85C8u: goto label_2e85c8;
            case 0x2E85D8u: goto label_2e85d8;
            case 0x2E85F8u: goto label_2e85f8;
            case 0x2E8670u: goto label_2e8670;
            case 0x2E86CCu: goto label_2e86cc;
            case 0x2E86E0u: goto label_2e86e0;
            case 0x2E8700u: goto label_2e8700;
            case 0x2E8710u: goto label_2e8710;
            case 0x2E878Cu: goto label_2e878c;
            case 0x2E8798u: goto label_2e8798;
            case 0x2E87B8u: goto label_2e87b8;
            case 0x2E87C8u: goto label_2e87c8;
            case 0x2E8884u: goto label_2e8884;
            case 0x2E8910u: goto label_2e8910;
            case 0x2E8914u: goto label_2e8914;
            case 0x2E891Cu: goto label_2e891c;
            case 0x2E898Cu: goto label_2e898c;
            case 0x2E89A4u: goto label_2e89a4;
            case 0x2E89B0u: goto label_2e89b0;
            case 0x2E89B4u: goto label_2e89b4;
            case 0x2E89B8u: goto label_2e89b8;
            case 0x2E89D0u: goto label_2e89d0;
            case 0x2E89E0u: goto label_2e89e0;
            case 0x2E89E4u: goto label_2e89e4;
            case 0x2E89E8u: goto label_2e89e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E8A10u;
}
