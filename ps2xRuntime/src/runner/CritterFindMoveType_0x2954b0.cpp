#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterFindMoveType
// Address: 0x2954b0 - 0x2955d0
void CritterFindMoveType_0x2954b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2954b0u;

label_2954b0:
    // 0x2954b0: 0x27bdffe0
    ctx->pc = 0x2954b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2954b4: 0xffbf0010
    ctx->pc = 0x2954b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2954b8: 0xffb00000
    ctx->pc = 0x2954b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2954bc: 0x80802d
    ctx->pc = 0x2954bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2954c0: 0x2407ffff
    ctx->pc = 0x2954c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2954c4: 0x8e030004
    ctx->pc = 0x2954c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2954c8: 0x44801800
    ctx->pc = 0x2954c8u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x2954cc: 0x84620110
    ctx->pc = 0x2954ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x2954d0: 0x1840002f
    ctx->pc = 0x2954D0u;
    {
        const bool branch_taken_0x2954d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2954D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2954d0) {
            ctx->pc = 0x295590u;
            goto label_295590;
        }
    }
    ctx->pc = 0x2954D8u;
    // 0x2954d8: 0x240c0090
    ctx->pc = 0x2954d8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 144));
    // 0x2954dc: 0x8c6d0124
    ctx->pc = 0x2954dcu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x2954e0: 0x46001886
    ctx->pc = 0x2954e0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x2954e4: 0x2609025c
    ctx->pc = 0x2954e4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 604));
    // 0x2954e8: 0x3c0b0031
    ctx->pc = 0x2954e8u;
    SET_GPR_U32(ctx, 11, ((uint32_t)49 << 16));
    // 0x2954ec: 0x240a0002
    ctx->pc = 0x2954ecu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2954f0: 0x40402d
    ctx->pc = 0x2954f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2954f4: 0x8c1018
    ctx->pc = 0x2954f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2954f8:
    // 0x2954f8: 0x4d1821
    ctx->pc = 0x2954f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2954fc: 0x8c620004
    ctx->pc = 0x2954fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x295500: 0x30420004
    ctx->pc = 0x295500u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x295504: 0x5440001f
    ctx->pc = 0x295504u;
    {
        const bool branch_taken_0x295504 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295504) {
            ctx->pc = 0x295508u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x295584u;
            goto label_295584;
        }
    }
    ctx->pc = 0x29550Cu;
    // 0x29550c: 0x8c620000
    ctx->pc = 0x29550cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295510: 0x5445001c
    ctx->pc = 0x295510u;
    {
        const bool branch_taken_0x295510 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x295510) {
            ctx->pc = 0x295514u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x295584u;
            goto label_295584;
        }
    }
    ctx->pc = 0x295518u;
    // 0x295518: 0xc4610080
    ctx->pc = 0x295518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29551c: 0x46011034
    ctx->pc = 0x29551cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295520: 0x0
    ctx->pc = 0x295520u;
    // NOP
    // 0x295524: 0x45000007
    ctx->pc = 0x295524u;
    {
        const bool branch_taken_0x295524 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x295528u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x295524) {
            ctx->pc = 0x295544u;
            goto label_295544;
        }
    }
    ctx->pc = 0x29552Cu;
    // 0x29552c: 0x1221021
    ctx->pc = 0x29552cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x295530: 0xc4400000
    ctx->pc = 0x295530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295534: 0x46010000
    ctx->pc = 0x295534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x295538: 0xc561ffa4
    ctx->pc = 0x295538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29553c: 0x10000002
    ctx->pc = 0x29553Cu;
    {
        const bool branch_taken_0x29553c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295540u;
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x29553c) {
            ctx->pc = 0x295548u;
            goto label_295548;
        }
    }
    ctx->pc = 0x295544u;
label_295544:
    // 0x295544: 0x44800000
    ctx->pc = 0x295544u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_295548:
    // 0x295548: 0x46020036
    ctx->pc = 0x295548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29554c: 0x45010003
    ctx->pc = 0x29554Cu;
    {
        const bool branch_taken_0x29554c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29554c) {
            ctx->pc = 0x29555Cu;
            goto label_29555c;
        }
    }
    ctx->pc = 0x295554u;
    // 0x295554: 0x50c0000b
    ctx->pc = 0x295554u;
    {
        const bool branch_taken_0x295554 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x295554) {
            ctx->pc = 0x295558u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x295584u;
            goto label_295584;
        }
    }
    ctx->pc = 0x29555Cu;
label_29555c:
    // 0x29555c: 0x4e20006
    ctx->pc = 0x29555Cu;
    {
        const bool branch_taken_0x29555c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x29555c) {
            ctx->pc = 0x295560u;
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x295578u;
            goto label_295578;
        }
    }
    ctx->pc = 0x295564u;
    // 0x295564: 0x46030034
    ctx->pc = 0x295564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295568: 0x0
    ctx->pc = 0x295568u;
    // NOP
    // 0x29556c: 0x45020005
    ctx->pc = 0x29556Cu;
    {
        const bool branch_taken_0x29556c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29556c) {
            ctx->pc = 0x295570u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x295584u;
            goto label_295584;
        }
    }
    ctx->pc = 0x295574u;
    // 0x295574: 0x80382d
    ctx->pc = 0x295574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295578:
    // 0x295578: 0x10ca0005
    ctx->pc = 0x295578u;
    {
        const bool branch_taken_0x295578 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 10));
        ctx->pc = 0x29557Cu;
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x295578) {
            ctx->pc = 0x295590u;
            goto label_295590;
        }
    }
    ctx->pc = 0x295580u;
    // 0x295580: 0x24840001
    ctx->pc = 0x295580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_295584:
    // 0x295584: 0x88102a
    ctx->pc = 0x295584u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 8)));
    // 0x295588: 0x1440ffdb
    ctx->pc = 0x295588u;
    {
        const bool branch_taken_0x295588 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29558Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x295588) {
            ctx->pc = 0x2954F8u;
            goto label_2954f8;
        }
    }
    ctx->pc = 0x295590u;
label_295590:
    // 0x295590: 0x4e1000b
    ctx->pc = 0x295590u;
    {
        const bool branch_taken_0x295590 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x295594u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295590) {
            ctx->pc = 0x2955C0u;
            goto label_2955c0;
        }
    }
    ctx->pc = 0x295598u;
    // 0x295598: 0x10c00009
    ctx->pc = 0x295598u;
    {
        const bool branch_taken_0x295598 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x29559Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x295598) {
            ctx->pc = 0x2955C0u;
            goto label_2955c0;
        }
    }
    ctx->pc = 0x2955A0u;
    // 0x2955a0: 0xc0b492e
    ctx->pc = 0x2955A0u;
    SET_GPR_U32(ctx, 31, 0x2955A8u);
    ctx->pc = 0x2955A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959784));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2955A8u; }
    }
    if (ctx->pc != 0x2955A8u) { return; }
    ctx->pc = 0x2955A8u;
    // 0x2955a8: 0x200202d
    ctx->pc = 0x2955a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955ac: 0x24050020
    ctx->pc = 0x2955acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2955b0: 0xc0a552c
    ctx->pc = 0x2955B0u;
    SET_GPR_U32(ctx, 31, 0x2955B8u);
    ctx->pc = 0x2955B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2954B0u;
    goto label_2954b0;
    ctx->pc = 0x2955B8u;
label_2955b8:
    // 0x2955b8: 0x40382d
    ctx->pc = 0x2955b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955bc: 0xe0102d
    ctx->pc = 0x2955bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2955c0:
    // 0x2955c0: 0xdfbf0010
    ctx->pc = 0x2955c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2955c4: 0xdfb00000
    ctx->pc = 0x2955c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2955c8: 0x3e00008
    ctx->pc = 0x2955C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2955CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2954B0u: goto label_2954b0;
            case 0x2954F8u: goto label_2954f8;
            case 0x295544u: goto label_295544;
            case 0x295548u: goto label_295548;
            case 0x29555Cu: goto label_29555c;
            case 0x295578u: goto label_295578;
            case 0x295584u: goto label_295584;
            case 0x295590u: goto label_295590;
            case 0x2955B8u: goto label_2955b8;
            case 0x2955C0u: goto label_2955c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2955D0u;
}
