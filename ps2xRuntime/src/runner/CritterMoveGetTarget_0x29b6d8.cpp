#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterMoveGetTarget
// Address: 0x29b6d8 - 0x29b81c
void CritterMoveGetTarget_0x29b6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29b6d8u;

label_29b6d8:
    // 0x29b6d8: 0x27bdff80
    ctx->pc = 0x29b6d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29b6dc: 0xffbf0060
    ctx->pc = 0x29b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29b6e0: 0xffb40050
    ctx->pc = 0x29b6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29b6e4: 0xffb30040
    ctx->pc = 0x29b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29b6e8: 0xffb20030
    ctx->pc = 0x29b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29b6ec: 0xffb10020
    ctx->pc = 0x29b6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29b6f0: 0xffb00010
    ctx->pc = 0x29b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29b6f4: 0xe7b40070
    ctx->pc = 0x29b6f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29b6f8: 0x80882d
    ctx->pc = 0x29b6f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6fc: 0xa0982d
    ctx->pc = 0x29b6fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b700: 0xc0a02d
    ctx->pc = 0x29b700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b704: 0x3c0162d8
    ctx->pc = 0x29b704u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25304 << 16));
    // 0x29b708: 0x3421d727
    ctx->pc = 0x29b708u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x29b70c: 0x4481a000
    ctx->pc = 0x29b70cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29b710: 0x1260000c
    ctx->pc = 0x29B710u;
    {
        const bool branch_taken_0x29b710 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B714u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x29b710) {
            ctx->pc = 0x29B744u;
            goto label_29b744;
        }
    }
    ctx->pc = 0x29B718u;
    // 0x29b718: 0xc6610018
    ctx->pc = 0x29b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b71c: 0x44800000
    ctx->pc = 0x29b71cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29b720: 0x46010034
    ctx->pc = 0x29b720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b724: 0x0
    ctx->pc = 0x29b724u;
    // NOP
    // 0x29b728: 0x45020007
    ctx->pc = 0x29B728u;
    {
        const bool branch_taken_0x29b728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b728) {
            ctx->pc = 0x29B72Cu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 310)));
            ctx->pc = 0x29B748u;
            goto label_29b748;
        }
    }
    ctx->pc = 0x29B730u;
    // 0x29b730: 0xc62004f0
    ctx->pc = 0x29b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b734: 0x46000834
    ctx->pc = 0x29b734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b738: 0x0
    ctx->pc = 0x29b738u;
    // NOP
    // 0x29b73c: 0x4501002e
    ctx->pc = 0x29B73Cu;
    {
        const bool branch_taken_0x29b73c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B740u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x29b73c) {
            ctx->pc = 0x29B7F8u;
            goto label_29b7f8;
        }
    }
    ctx->pc = 0x29B744u;
label_29b744:
    // 0x29b744: 0x86220136
    ctx->pc = 0x29b744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 310)));
label_29b748:
    // 0x29b748: 0x18400013
    ctx->pc = 0x29B748u;
    {
        const bool branch_taken_0x29b748 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29B74Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29b748) {
            ctx->pc = 0x29B798u;
            goto label_29b798;
        }
    }
    ctx->pc = 0x29B750u;
    // 0x29b750: 0x220202d
    ctx->pc = 0x29b750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b754: 0x0
    ctx->pc = 0x29b754u;
    // NOP
label_29b758:
    // 0x29b758: 0x260282d
    ctx->pc = 0x29b758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b75c: 0xc0a6d60
    ctx->pc = 0x29B75Cu;
    SET_GPR_U32(ctx, 31, 0x29B764u);
    ctx->pc = 0x29B760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29B580u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterReCalcTarget_0x29b580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B764u; }
    }
    if (ctx->pc != 0x29B764u) { return; }
    ctx->pc = 0x29B764u;
    // 0x29b764: 0x6420006
    ctx->pc = 0x29B764u;
    {
        const bool branch_taken_0x29b764 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x29b764) {
            ctx->pc = 0x29B768u;
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x29B780u;
            goto label_29b780;
        }
    }
    ctx->pc = 0x29B76Cu;
    // 0x29b76c: 0x46140034
    ctx->pc = 0x29b76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b770: 0x0
    ctx->pc = 0x29b770u;
    // NOP
    // 0x29b774: 0x45020004
    ctx->pc = 0x29B774u;
    {
        const bool branch_taken_0x29b774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b774) {
            ctx->pc = 0x29B778u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29B788u;
            goto label_29b788;
        }
    }
    ctx->pc = 0x29B77Cu;
    // 0x29b77c: 0x200902d
    ctx->pc = 0x29b77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b780:
    // 0x29b780: 0x46000506
    ctx->pc = 0x29b780u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29b784: 0x26100001
    ctx->pc = 0x29b784u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_29b788:
    // 0x29b788: 0x86220136
    ctx->pc = 0x29b788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 310)));
    // 0x29b78c: 0x202102a
    ctx->pc = 0x29b78cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x29b790: 0x1440fff1
    ctx->pc = 0x29B790u;
    {
        const bool branch_taken_0x29b790 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29B794u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29b790) {
            ctx->pc = 0x29B758u;
            goto label_29b758;
        }
    }
    ctx->pc = 0x29B798u;
label_29b798:
    // 0x29b798: 0x16800008
    ctx->pc = 0x29B798u;
    {
        const bool branch_taken_0x29b798 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x29b798) {
            ctx->pc = 0x29B7BCu;
            goto label_29b7bc;
        }
    }
    ctx->pc = 0x29B7A0u;
    // 0x29b7a0: 0x3c016258
    ctx->pc = 0x29b7a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25176 << 16));
    // 0x29b7a4: 0x3421d727
    ctx->pc = 0x29b7a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x29b7a8: 0x44810000
    ctx->pc = 0x29b7a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29b7ac: 0x46140036
    ctx->pc = 0x29b7acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b7b0: 0x0
    ctx->pc = 0x29b7b0u;
    // NOP
    // 0x29b7b4: 0x45030001
    ctx->pc = 0x29B7B4u;
    {
        const bool branch_taken_0x29b7b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b7b4) {
            ctx->pc = 0x29B7B8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x29B7BCu;
            goto label_29b7bc;
        }
    }
    ctx->pc = 0x29B7BCu;
label_29b7bc:
    // 0x29b7bc: 0x6400005
    ctx->pc = 0x29B7BCu;
    {
        const bool branch_taken_0x29b7bc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x29B7C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x29b7bc) {
            ctx->pc = 0x29B7D4u;
            goto label_29b7d4;
        }
    }
    ctx->pc = 0x29B7C4u;
    // 0x29b7c4: 0x2421818
    ctx->pc = 0x29b7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29b7c8: 0x711021
    ctx->pc = 0x29b7c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x29b7cc: 0x10000009
    ctx->pc = 0x29B7CCu;
    {
        const bool branch_taken_0x29b7cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B7D0u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 320)));
        if (branch_taken_0x29b7cc) {
            ctx->pc = 0x29B7F4u;
            goto label_29b7f4;
        }
    }
    ctx->pc = 0x29B7D4u;
label_29b7d4:
    // 0x29b7d4: 0x12800008
    ctx->pc = 0x29B7D4u;
    {
        const bool branch_taken_0x29b7d4 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B7D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29b7d4) {
            ctx->pc = 0x29B7F8u;
            goto label_29b7f8;
        }
    }
    ctx->pc = 0x29B7DCu;
    // 0x29b7dc: 0x8e240b64
    ctx->pc = 0x29b7dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 2916)));
    // 0x29b7e0: 0x10800005
    ctx->pc = 0x29B7E0u;
    {
        const bool branch_taken_0x29b7e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B7E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29b7e0) {
            ctx->pc = 0x29B7F8u;
            goto label_29b7f8;
        }
    }
    ctx->pc = 0x29B7E8u;
    // 0x29b7e8: 0xc0a6db6
    ctx->pc = 0x29B7E8u;
    SET_GPR_U32(ctx, 31, 0x29B7F0u);
    ctx->pc = 0x29B7ECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29B6D8u;
    goto label_29b6d8;
    ctx->pc = 0x29B7F0u;
label_29b7f0:
    // 0x29b7f0: 0x40902d
    ctx->pc = 0x29b7f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29b7f4:
    // 0x29b7f4: 0x240102d
    ctx->pc = 0x29b7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29b7f8:
    // 0x29b7f8: 0xdfbf0060
    ctx->pc = 0x29b7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b7fc: 0xdfb40050
    ctx->pc = 0x29b7fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b800: 0xdfb30040
    ctx->pc = 0x29b800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b804: 0xdfb20030
    ctx->pc = 0x29b804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b808: 0xdfb10020
    ctx->pc = 0x29b808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b80c: 0xdfb00010
    ctx->pc = 0x29b80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b810: 0xc7b40070
    ctx->pc = 0x29b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b814: 0x3e00008
    ctx->pc = 0x29B814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B818u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29B6D8u: goto label_29b6d8;
            case 0x29B744u: goto label_29b744;
            case 0x29B748u: goto label_29b748;
            case 0x29B758u: goto label_29b758;
            case 0x29B780u: goto label_29b780;
            case 0x29B788u: goto label_29b788;
            case 0x29B798u: goto label_29b798;
            case 0x29B7BCu: goto label_29b7bc;
            case 0x29B7D4u: goto label_29b7d4;
            case 0x29B7F0u: goto label_29b7f0;
            case 0x29B7F4u: goto label_29b7f4;
            case 0x29B7F8u: goto label_29b7f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29B81Cu;
}
