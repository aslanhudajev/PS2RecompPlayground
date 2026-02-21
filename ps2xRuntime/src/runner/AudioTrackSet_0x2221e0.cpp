#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTrackSet
// Address: 0x2221e0 - 0x222444
void AudioTrackSet_0x2221e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2221e0u;

    // 0x2221e0: 0x27bdff50
    ctx->pc = 0x2221e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2221e4: 0xffbf0090
    ctx->pc = 0x2221e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2221e8: 0xffbe0080
    ctx->pc = 0x2221e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2221ec: 0xffb70070
    ctx->pc = 0x2221ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2221f0: 0xffb60060
    ctx->pc = 0x2221f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2221f4: 0xffb50050
    ctx->pc = 0x2221f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2221f8: 0xffb40040
    ctx->pc = 0x2221f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2221fc: 0xffb30030
    ctx->pc = 0x2221fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x222200: 0xffb20020
    ctx->pc = 0x222200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x222204: 0xffb10010
    ctx->pc = 0x222204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x222208: 0xffb00000
    ctx->pc = 0x222208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22220c: 0xe7b400a0
    ctx->pc = 0x22220cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x222210: 0xb02d
    ctx->pc = 0x222210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222214: 0x8c82000c
    ctx->pc = 0x222214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x222218: 0x2f402
    ctx->pc = 0x222218u;
    SET_GPR_U32(ctx, 30, SRL32(GPR_U32(ctx, 2), 16));
    // 0x22221c: 0x8c900014
    ctx->pc = 0x22221cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x222220: 0x8e120000
    ctx->pc = 0x222220u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222224: 0x121c03
    ctx->pc = 0x222224u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 16));
    // 0x222228: 0x3c020032
    ctx->pc = 0x222228u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22222c: 0x8c45fd6c
    ctx->pc = 0x22222cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x222230: 0x8ca40010
    ctx->pc = 0x222230u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x222234: 0x2402002c
    ctx->pc = 0x222234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x222238: 0x621818
    ctx->pc = 0x222238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22223c: 0x641821
    ctx->pc = 0x22223cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222240: 0x84640026
    ctx->pc = 0x222240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x222244: 0x32420fff
    ctx->pc = 0x222244u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 4095));
    // 0x222248: 0x822021
    ctx->pc = 0x222248u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22224c: 0x8ca30014
    ctx->pc = 0x22224cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x222250: 0x2402001c
    ctx->pc = 0x222250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x222254: 0x821018
    ctx->pc = 0x222254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222258: 0x433021
    ctx->pc = 0x222258u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22225c: 0x3c03003a
    ctx->pc = 0x22225cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x222260: 0x246522f8
    ctx->pc = 0x222260u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 8952));
    // 0x222264: 0x8c6222f8
    ctx->pc = 0x222264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x222268: 0x4400006
    ctx->pc = 0x222268u;
    {
        const bool branch_taken_0x222268 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x222268) {
            ctx->pc = 0x222284u;
            goto label_222284;
        }
    }
    ctx->pc = 0x222270u;
    // 0x222270: 0x8c6222f8
    ctx->pc = 0x222270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x222274: 0x44820000
    ctx->pc = 0x222274u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x222278: 0x46800020
    ctx->pc = 0x222278u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x22227c: 0x1000000a
    ctx->pc = 0x22227Cu;
    {
        const bool branch_taken_0x22227c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222280u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        if (branch_taken_0x22227c) {
            ctx->pc = 0x2222A8u;
            goto label_2222a8;
        }
    }
    ctx->pc = 0x222284u;
label_222284:
    // 0x222284: 0x8ca30000
    ctx->pc = 0x222284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x222288: 0x30630001
    ctx->pc = 0x222288u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x22228c: 0x8ca20000
    ctx->pc = 0x22228cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x222290: 0x21042
    ctx->pc = 0x222290u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x222294: 0x621825
    ctx->pc = 0x222294u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222298: 0x44830000
    ctx->pc = 0x222298u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x22229c: 0x46800020
    ctx->pc = 0x22229cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2222a0: 0x46000000
    ctx->pc = 0x2222a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2222a4: 0xe4c00018
    ctx->pc = 0x2222a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_2222a8:
    // 0x2222a8: 0x882d
    ctx->pc = 0x2222a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222ac: 0x3c020032
    ctx->pc = 0x2222acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2222b0: 0x2455fe38
    ctx->pc = 0x2222b0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294966840));
    // 0x2222b4: 0x24140014
    ctx->pc = 0x2222b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2222b8: 0x3c020032
    ctx->pc = 0x2222b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2222bc: 0x2453fe3c
    ctx->pc = 0x2222bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294966844));
    // 0x2222c0: 0x2402001c
    ctx->pc = 0x2222c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2222c4: 0x82b818
    ctx->pc = 0x2222c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2222c8: 0x3c014270
    ctx->pc = 0x2222c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
    // 0x2222cc: 0x4481a000
    ctx->pc = 0x2222ccu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2222d0: 0x23e1007
    ctx->pc = 0x2222d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), GPR_U32(ctx, 17) & 0x1F));
    // 0x2222d4: 0x0
    ctx->pc = 0x2222d4u;
    // NOP
label_2222d8:
    // 0x2222d8: 0x30420001
    ctx->pc = 0x2222d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2222dc: 0x1040003e
    ctx->pc = 0x2222DCu;
    {
        const bool branch_taken_0x2222dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2222E0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2222dc) {
            ctx->pc = 0x2223D8u;
            goto label_2223d8;
        }
    }
    ctx->pc = 0x2222E4u;
    // 0x2222e4: 0x751021
    ctx->pc = 0x2222e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2222e8: 0xac520000
    ctx->pc = 0x2222e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2222ec: 0x732021
    ctx->pc = 0x2222ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2222f0: 0x8e020004
    ctx->pc = 0x2222f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2222f4: 0xac820000
    ctx->pc = 0x2222f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2222f8: 0x3c020032
    ctx->pc = 0x2222f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2222fc: 0x2442fe40
    ctx->pc = 0x2222fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x222300: 0x622821
    ctx->pc = 0x222300u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222304: 0x3c03003a
    ctx->pc = 0x222304u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x222308: 0x246422f8
    ctx->pc = 0x222308u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 8952));
    // 0x22230c: 0x8c6222f8
    ctx->pc = 0x22230cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x222310: 0x4400006
    ctx->pc = 0x222310u;
    {
        const bool branch_taken_0x222310 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x222310) {
            ctx->pc = 0x22232Cu;
            goto label_22232c;
        }
    }
    ctx->pc = 0x222318u;
    // 0x222318: 0x8c6222f8
    ctx->pc = 0x222318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x22231c: 0x44820800
    ctx->pc = 0x22231cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x222320: 0x46800860
    ctx->pc = 0x222320u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x222324: 0x1000000a
    ctx->pc = 0x222324u;
    {
        const bool branch_taken_0x222324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222328u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x222324) {
            ctx->pc = 0x222350u;
            goto label_222350;
        }
    }
    ctx->pc = 0x22232Cu;
label_22232c:
    // 0x22232c: 0x8c830000
    ctx->pc = 0x22232cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222330: 0x30630001
    ctx->pc = 0x222330u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x222334: 0x8c820000
    ctx->pc = 0x222334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222338: 0x21042
    ctx->pc = 0x222338u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x22233c: 0x621825
    ctx->pc = 0x22233cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222340: 0x44830800
    ctx->pc = 0x222340u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x222344: 0x46800860
    ctx->pc = 0x222344u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x222348: 0x46010840
    ctx->pc = 0x222348u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x22234c: 0x3c020032
    ctx->pc = 0x22234cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_222350:
    // 0x222350: 0x8c42fd6c
    ctx->pc = 0x222350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x222354: 0x8c420014
    ctx->pc = 0x222354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x222358: 0x2e21021
    ctx->pc = 0x222358u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x22235c: 0xc4400014
    ctx->pc = 0x22235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222360: 0x46140002
    ctx->pc = 0x222360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x222364: 0x46000800
    ctx->pc = 0x222364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x222368: 0xe4a00000
    ctx->pc = 0x222368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x22236c: 0x2341818
    ctx->pc = 0x22236cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222370: 0x2a32021
    ctx->pc = 0x222370u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x222374: 0x8e02000c
    ctx->pc = 0x222374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x222378: 0xac82000c
    ctx->pc = 0x222378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x22237c: 0x732021
    ctx->pc = 0x22237cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x222380: 0x8e020004
    ctx->pc = 0x222380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x222384: 0xac820000
    ctx->pc = 0x222384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x222388: 0x3c020032
    ctx->pc = 0x222388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22238c: 0x2442fe48
    ctx->pc = 0x22238cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966856));
    // 0x222390: 0x621821
    ctx->pc = 0x222390u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222394: 0x8e020014
    ctx->pc = 0x222394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x222398: 0xac620000
    ctx->pc = 0x222398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22239c: 0x220202d
    ctx->pc = 0x22239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223a0: 0x240282d
    ctx->pc = 0x2223a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223a4: 0x8e060008
    ctx->pc = 0x2223a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2223a8: 0x8e070010
    ctx->pc = 0x2223a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2223ac: 0xc087fd6
    ctx->pc = 0x2223ACu;
    SET_GPR_U32(ctx, 31, 0x2223B4u);
    ctx->pc = 0x2223B0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x21FF58u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_chinfo_0x21ff58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223B4u; }
    }
    if (ctx->pc != 0x2223B4u) { return; }
    ctx->pc = 0x2223B4u;
    // 0x2223b4: 0x8e020014
    ctx->pc = 0x2223b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2223b8: 0x10400004
    ctx->pc = 0x2223B8u;
    {
        const bool branch_taken_0x2223b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2223BCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2223b8) {
            ctx->pc = 0x2223CCu;
            goto label_2223cc;
        }
    }
    ctx->pc = 0x2223C0u;
    // 0x2223c0: 0x8e020004
    ctx->pc = 0x2223c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2223c4: 0x54400005
    ctx->pc = 0x2223C4u;
    {
        const bool branch_taken_0x2223c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2223c4) {
            ctx->pc = 0x2223C8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2223DCu;
            goto label_2223dc;
        }
    }
    ctx->pc = 0x2223CCu;
label_2223cc:
    // 0x2223cc: 0x24040001
    ctx->pc = 0x2223ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2223d0: 0xc0886ae
    ctx->pc = 0x2223D0u;
    SET_GPR_U32(ctx, 31, 0x2223D8u);
    ctx->pc = 0x2223D4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    ctx->pc = 0x221AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackKill_0x221ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223D8u; }
    }
    if (ctx->pc != 0x2223D8u) { return; }
    ctx->pc = 0x2223D8u;
label_2223d8:
    // 0x2223d8: 0x26310001
    ctx->pc = 0x2223d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2223dc:
    // 0x2223dc: 0x2a22000c
    ctx->pc = 0x2223dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 12));
    // 0x2223e0: 0x1440ffbd
    ctx->pc = 0x2223E0u;
    {
        const bool branch_taken_0x2223e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2223E4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), GPR_U32(ctx, 17) & 0x1F));
        if (branch_taken_0x2223e0) {
            ctx->pc = 0x2222D8u;
            goto label_2222d8;
        }
    }
    ctx->pc = 0x2223E8u;
    // 0x2223e8: 0x56c00008
    ctx->pc = 0x2223E8u;
    {
        const bool branch_taken_0x2223e8 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x2223e8) {
            ctx->pc = 0x2223ECu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x22240Cu;
            goto label_22240c;
        }
    }
    ctx->pc = 0x2223F0u;
    // 0x2223f0: 0x2404ffff
    ctx->pc = 0x2223f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2223f4: 0x240282d
    ctx->pc = 0x2223f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223f8: 0x8e060008
    ctx->pc = 0x2223f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2223fc: 0x8e070010
    ctx->pc = 0x2223fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x222400: 0xc087fd6
    ctx->pc = 0x222400u;
    SET_GPR_U32(ctx, 31, 0x222408u);
    ctx->pc = 0x222404u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x21FF58u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_chinfo_0x21ff58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222408u; }
    }
    if (ctx->pc != 0x222408u) { return; }
    ctx->pc = 0x222408u;
    // 0x222408: 0xae000004
    ctx->pc = 0x222408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_22240c:
    // 0x22240c: 0xae000014
    ctx->pc = 0x22240cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x222410: 0xdfbf0090
    ctx->pc = 0x222410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x222414: 0xdfbe0080
    ctx->pc = 0x222414u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x222418: 0xdfb70070
    ctx->pc = 0x222418u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22241c: 0xdfb60060
    ctx->pc = 0x22241cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x222420: 0xdfb50050
    ctx->pc = 0x222420u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x222424: 0xdfb40040
    ctx->pc = 0x222424u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222428: 0xdfb30030
    ctx->pc = 0x222428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22242c: 0xdfb20020
    ctx->pc = 0x22242cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222430: 0xdfb10010
    ctx->pc = 0x222430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222434: 0xdfb00000
    ctx->pc = 0x222434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222438: 0xc7b400a0
    ctx->pc = 0x222438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22243c: 0x3e00008
    ctx->pc = 0x22243Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222440u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222284u: goto label_222284;
            case 0x2222A8u: goto label_2222a8;
            case 0x2222D8u: goto label_2222d8;
            case 0x22232Cu: goto label_22232c;
            case 0x222350u: goto label_222350;
            case 0x2223CCu: goto label_2223cc;
            case 0x2223D8u: goto label_2223d8;
            case 0x2223DCu: goto label_2223dc;
            case 0x22240Cu: goto label_22240c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222444u;
}
