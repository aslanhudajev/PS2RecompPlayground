#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterMoveDone
// Address: 0x2956f8 - 0x2958d8
void CritterMoveDone_0x2956f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2956f8u;

    // 0x2956f8: 0x27bdffd0
    ctx->pc = 0x2956f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2956fc: 0xffbf0020
    ctx->pc = 0x2956fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x295700: 0xffb10010
    ctx->pc = 0x295700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x295704: 0xffb00000
    ctx->pc = 0x295704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295708: 0x80802d
    ctx->pc = 0x295708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29570c: 0xa0882d
    ctx->pc = 0x29570cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295710: 0x2406ffff
    ctx->pc = 0x295710u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295714: 0x86040124
    ctx->pc = 0x295714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x295718: 0x4800006
    ctx->pc = 0x295718u;
    {
        const bool branch_taken_0x295718 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29571Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295718) {
            ctx->pc = 0x295734u;
            goto label_295734;
        }
    }
    ctx->pc = 0x295720u;
    // 0x295720: 0x8e030004
    ctx->pc = 0x295720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295724: 0x24020090
    ctx->pc = 0x295724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x295728: 0x821018
    ctx->pc = 0x295728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29572c: 0x8c630124
    ctx->pc = 0x29572cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x295730: 0x432821
    ctx->pc = 0x295730u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_295734:
    // 0x295734: 0x10a00018
    ctx->pc = 0x295734u;
    {
        const bool branch_taken_0x295734 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x295738u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x295734) {
            ctx->pc = 0x295798u;
            goto label_295798;
        }
    }
    ctx->pc = 0x29573Cu;
    // 0x29573c: 0x8ca30000
    ctx->pc = 0x29573cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x295740: 0x10620005
    ctx->pc = 0x295740u;
    {
        const bool branch_taken_0x295740 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x295744u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x295740) {
            ctx->pc = 0x295758u;
            goto label_295758;
        }
    }
    ctx->pc = 0x295748u;
    // 0x295748: 0x1062000d
    ctx->pc = 0x295748u;
    {
        const bool branch_taken_0x295748 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29574Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x295748) {
            ctx->pc = 0x295780u;
            goto label_295780;
        }
    }
    ctx->pc = 0x295750u;
    // 0x295750: 0x10000012
    ctx->pc = 0x295750u;
    {
        const bool branch_taken_0x295750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295754u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
        if (branch_taken_0x295750) {
            ctx->pc = 0x29579Cu;
            goto label_29579c;
        }
    }
    ctx->pc = 0x295758u;
label_295758:
    // 0x295758: 0x84a20054
    ctx->pc = 0x295758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x29575c: 0x443000f
    ctx->pc = 0x29575Cu;
    {
        const bool branch_taken_0x29575c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29575c) {
            ctx->pc = 0x295760u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->pc = 0x29579Cu;
            goto label_29579c;
        }
    }
    ctx->pc = 0x295764u;
    // 0x295764: 0x3c040034
    ctx->pc = 0x295764u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x295768: 0x8c83e880
    ctx->pc = 0x295768u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294961280)));
    // 0x29576c: 0x24020001
    ctx->pc = 0x29576cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x295770: 0x5462000a
    ctx->pc = 0x295770u;
    {
        const bool branch_taken_0x295770 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x295770) {
            ctx->pc = 0x295774u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->pc = 0x29579Cu;
            goto label_29579c;
        }
    }
    ctx->pc = 0x295778u;
    // 0x295778: 0x10000006
    ctx->pc = 0x295778u;
    {
        const bool branch_taken_0x295778 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29577Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x295778) {
            ctx->pc = 0x295794u;
            goto label_295794;
        }
    }
    ctx->pc = 0x295780u;
label_295780:
    // 0x295780: 0x8c83e880
    ctx->pc = 0x295780u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294961280)));
    // 0x295784: 0x24020003
    ctx->pc = 0x295784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x295788: 0x54620004
    ctx->pc = 0x295788u;
    {
        const bool branch_taken_0x295788 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x295788) {
            ctx->pc = 0x29578Cu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->pc = 0x29579Cu;
            goto label_29579c;
        }
    }
    ctx->pc = 0x295790u;
    // 0x295790: 0x24020004
    ctx->pc = 0x295790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_295794:
    // 0x295794: 0xac82e880
    ctx->pc = 0x295794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961280), GPR_U32(ctx, 2));
label_295798:
    // 0x295798: 0x86020128
    ctx->pc = 0x295798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
label_29579c:
    // 0x29579c: 0x4420029
    ctx->pc = 0x29579Cu;
    {
        const bool branch_taken_0x29579c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x29579c) {
            ctx->pc = 0x2957A0u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 298)));
            ctx->pc = 0x295844u;
            goto label_295844;
        }
    }
    ctx->pc = 0x2957A4u;
    // 0x2957a4: 0x8e020b64
    ctx->pc = 0x2957a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2916)));
    // 0x2957a8: 0x50400005
    ctx->pc = 0x2957A8u;
    {
        const bool branch_taken_0x2957a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2957a8) {
            ctx->pc = 0x2957ACu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->pc = 0x2957C0u;
            goto label_2957c0;
        }
    }
    ctx->pc = 0x2957B0u;
    // 0x2957b0: 0x84420128
    ctx->pc = 0x2957b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2957b4: 0x443003c
    ctx->pc = 0x2957B4u;
    {
        const bool branch_taken_0x2957b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2957b4) {
            ctx->pc = 0x2957B8u;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2882)));
            ctx->pc = 0x2958A8u;
            goto label_2958a8;
        }
    }
    ctx->pc = 0x2957BCu;
    // 0x2957bc: 0x9602012c
    ctx->pc = 0x2957bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 300)));
label_2957c0:
    // 0x2957c0: 0x24420001
    ctx->pc = 0x2957c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2957c4: 0xa602012c
    ctx->pc = 0x2957c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 300), (uint16_t)GPR_U32(ctx, 2));
    // 0x2957c8: 0x21400
    ctx->pc = 0x2957c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2957cc: 0x22c03
    ctx->pc = 0x2957ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2957d0: 0x28a20008
    ctx->pc = 0x2957d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x2957d4: 0x1040000a
    ctx->pc = 0x2957D4u;
    {
        const bool branch_taken_0x2957d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2957d4) {
            ctx->pc = 0x295800u;
            goto label_295800;
        }
    }
    ctx->pc = 0x2957DCu;
    // 0x2957dc: 0x8e030004
    ctx->pc = 0x2957dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2957e0: 0x86020128
    ctx->pc = 0x2957e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2957e4: 0x8c640128
    ctx->pc = 0x2957e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 296)));
    // 0x2957e8: 0x24030050
    ctx->pc = 0x2957e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2957ec: 0x431018
    ctx->pc = 0x2957ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2957f0: 0x441021
    ctx->pc = 0x2957f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2957f4: 0x51840
    ctx->pc = 0x2957f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x2957f8: 0x431021
    ctx->pc = 0x2957f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2957fc: 0x84460020
    ctx->pc = 0x2957fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_295800:
    // 0x295800: 0x4c30029
    ctx->pc = 0x295800u;
    {
        const bool branch_taken_0x295800 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x295800) {
            ctx->pc = 0x295804u;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2882)));
            ctx->pc = 0x2958A8u;
            goto label_2958a8;
        }
    }
    ctx->pc = 0x295808u;
    // 0x295808: 0x2402ffff
    ctx->pc = 0x295808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29580c: 0xa6020128
    ctx->pc = 0x29580cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 296), (uint16_t)GPR_U32(ctx, 2));
    // 0x295810: 0xa602012c
    ctx->pc = 0x295810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 300), (uint16_t)GPR_U32(ctx, 2));
    // 0x295814: 0x8e020b60
    ctx->pc = 0x295814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
    // 0x295818: 0x10400022
    ctx->pc = 0x295818u;
    {
        const bool branch_taken_0x295818 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29581Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x295818) {
            ctx->pc = 0x2958A4u;
            goto label_2958a4;
        }
    }
    ctx->pc = 0x295820u;
label_295820:
    // 0x295820: 0xa4430128
    ctx->pc = 0x295820u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 296), (uint16_t)GPR_U32(ctx, 3));
    // 0x295824: 0xa443012c
    ctx->pc = 0x295824u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 300), (uint16_t)GPR_U32(ctx, 3));
    // 0x295828: 0x8c420b60
    ctx->pc = 0x295828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2912)));
    // 0x29582c: 0x0
    ctx->pc = 0x29582cu;
    // NOP
    // 0x295830: 0x0
    ctx->pc = 0x295830u;
    // NOP
    // 0x295834: 0x1440fffa
    ctx->pc = 0x295834u;
    {
        const bool branch_taken_0x295834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295834) {
            ctx->pc = 0x295820u;
            goto label_295820;
        }
    }
    ctx->pc = 0x29583Cu;
    // 0x29583c: 0x1000001a
    ctx->pc = 0x29583Cu;
    {
        const bool branch_taken_0x29583c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295840u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2882)));
        if (branch_taken_0x29583c) {
            ctx->pc = 0x2958A8u;
            goto label_2958a8;
        }
    }
    ctx->pc = 0x295844u;
label_295844:
    // 0x295844: 0x4400009
    ctx->pc = 0x295844u;
    {
        const bool branch_taken_0x295844 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x295848u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x295844) {
            ctx->pc = 0x29586Cu;
            goto label_29586c;
        }
    }
    ctx->pc = 0x29584Cu;
    // 0x29584c: 0x2021021
    ctx->pc = 0x29584cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x295850: 0x3c030031
    ctx->pc = 0x295850u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x295854: 0xc460ffa4
    ctx->pc = 0x295854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295858: 0xe440035c
    ctx->pc = 0x295858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 860), bits); }
    // 0x29585c: 0x9602012a
    ctx->pc = 0x29585cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 298)));
    // 0x295860: 0xa6020128
    ctx->pc = 0x295860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 296), (uint16_t)GPR_U32(ctx, 2));
    // 0x295864: 0x1000000f
    ctx->pc = 0x295864u;
    {
        const bool branch_taken_0x295864 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295868u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 300), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x295864) {
            ctx->pc = 0x2958A4u;
            goto label_2958a4;
        }
    }
    ctx->pc = 0x29586Cu;
label_29586c:
    // 0x29586c: 0x86020094
    ctx->pc = 0x29586cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x295870: 0x111880
    ctx->pc = 0x295870u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x295874: 0x2031821
    ctx->pc = 0x295874u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x295878: 0x3c040031
    ctx->pc = 0x295878u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x29587c: 0x2442fffe
    ctx->pc = 0x29587cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x295880: 0x44820000
    ctx->pc = 0x295880u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x295884: 0x46800020
    ctx->pc = 0x295884u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x295888: 0x3c013d08
    ctx->pc = 0x295888u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x29588c: 0x34218889
    ctx->pc = 0x29588cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x295890: 0x44810800
    ctx->pc = 0x295890u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x295894: 0x46010002
    ctx->pc = 0x295894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x295898: 0xc481ffa4
    ctx->pc = 0x295898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29589c: 0x46010000
    ctx->pc = 0x29589cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2958a0: 0xe460025c
    ctx->pc = 0x2958a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 604), bits); }
label_2958a4:
    // 0x2958a4: 0x86040b42
    ctx->pc = 0x2958a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2882)));
label_2958a8:
    // 0x2958a8: 0x4820005
    ctx->pc = 0x2958A8u;
    {
        const bool branch_taken_0x2958a8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2958a8) {
            ctx->pc = 0x2958ACu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 17));
            ctx->pc = 0x2958C0u;
            goto label_2958c0;
        }
    }
    ctx->pc = 0x2958B0u;
    // 0x2958b0: 0xc09e964
    ctx->pc = 0x2958B0u;
    SET_GPR_U32(ctx, 31, 0x2958B8u);
    ctx->pc = 0x2958B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958B8u; }
    }
    if (ctx->pc != 0x2958B8u) { return; }
    ctx->pc = 0x2958B8u;
    // 0x2958b8: 0xa6020b42
    ctx->pc = 0x2958b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2882), (uint16_t)GPR_U32(ctx, 2));
    // 0x2958bc: 0xa6110124
    ctx->pc = 0x2958bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 17));
label_2958c0:
    // 0x2958c0: 0xae000258
    ctx->pc = 0x2958c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x2958c4: 0xdfbf0020
    ctx->pc = 0x2958c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2958c8: 0xdfb10010
    ctx->pc = 0x2958c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2958cc: 0xdfb00000
    ctx->pc = 0x2958ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2958d0: 0x3e00008
    ctx->pc = 0x2958D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2958D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295734u: goto label_295734;
            case 0x295758u: goto label_295758;
            case 0x295780u: goto label_295780;
            case 0x295794u: goto label_295794;
            case 0x295798u: goto label_295798;
            case 0x29579Cu: goto label_29579c;
            case 0x2957C0u: goto label_2957c0;
            case 0x295800u: goto label_295800;
            case 0x295820u: goto label_295820;
            case 0x295844u: goto label_295844;
            case 0x29586Cu: goto label_29586c;
            case 0x2958A4u: goto label_2958a4;
            case 0x2958A8u: goto label_2958a8;
            case 0x2958C0u: goto label_2958c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2958D8u;
}
