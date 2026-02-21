#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: load24bitImage
// Address: 0x103470 - 0x1036b4
void load24bitImage_0x103470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103470u;

    // 0x103470: 0x8f8e82b8
    ctx->pc = 0x103470u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103474: 0x27bdffc0
    ctx->pc = 0x103474u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103478: 0xffb20020
    ctx->pc = 0x103478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10347c: 0x700014a9
    ctx->pc = 0x10347cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103480: 0xffb10010
    ctx->pc = 0x103480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103484: 0x2409ffff
    ctx->pc = 0x103484u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103488: 0xffb00000
    ctx->pc = 0x103488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10348c: 0x126182a
    ctx->pc = 0x10348cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 6)));
    // 0x103490: 0xffbf0030
    ctx->pc = 0x103490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x103494: 0xc78018
    ctx->pc = 0x103494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x103498: 0x7dc20000
    ctx->pc = 0x103498u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x10349c: 0x3c081000
    ctx->pc = 0x10349cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)4096 << 16));
    // 0x1034a0: 0x24c2003f
    ctx->pc = 0x1034a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 63));
    // 0x1034a4: 0xa0902d
    ctx->pc = 0x1034a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034a8: 0xc3100b
    ctx->pc = 0x1034a8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x1034ac: 0x100502d
    ctx->pc = 0x1034acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034b0: 0x21183
    ctx->pc = 0x1034b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1034b4: 0x108840
    ctx->pc = 0x1034b4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1034b8: 0x2143c
    ctx->pc = 0x1034b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1034bc: 0x12403c
    ctx->pc = 0x1034bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1034c0: 0x2301821
    ctx->pc = 0x1034c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1034c4: 0x1024025
    ctx->pc = 0x1034c4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1034c8: 0x123482a
    ctx->pc = 0x1034c8u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 3)));
    // 0x1034cc: 0x34028000
    ctx->pc = 0x1034ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1034d0: 0x2127c
    ctx->pc = 0x1034d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 9));
    // 0x1034d4: 0x2465000f
    ctx->pc = 0x1034d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 15));
    // 0x1034d8: 0x7383c
    ctx->pc = 0x1034d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1034dc: 0x1024025
    ctx->pc = 0x1034dcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1034e0: 0x69280b
    ctx->pc = 0x1034e0u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x1034e4: 0xc73825
    ctx->pc = 0x1034e4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1034e8: 0x354a0006
    ctx->pc = 0x1034e8u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 6));
    // 0x1034ec: 0x3c021000
    ctx->pc = 0x1034ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1034f0: 0x2103c
    ctx->pc = 0x1034f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1034f4: 0x34420005
    ctx->pc = 0x1034f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 5));
    // 0x1034f8: 0x2403000e
    ctx->pc = 0x1034f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1034fc: 0x2406003f
    ctx->pc = 0x1034fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 63));
    // 0x103500: 0x24090050
    ctx->pc = 0x103500u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 80));
    // 0x103504: 0x240b0051
    ctx->pc = 0x103504u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 81));
    // 0x103508: 0x240c0052
    ctx->pc = 0x103508u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 82));
    // 0x10350c: 0x240d0053
    ctx->pc = 0x10350cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 83));
    // 0x103510: 0xfdc80030
    ctx->pc = 0x103510u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 8));
    // 0x103514: 0x80c02d
    ctx->pc = 0x103514u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103518: 0xfdc20010
    ctx->pc = 0x103518u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 2));
    // 0x10351c: 0xfdc30018
    ctx->pc = 0x10351cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 3));
    // 0x103520: 0x52903
    ctx->pc = 0x103520u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x103524: 0xfdc60028
    ctx->pc = 0x103524u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 6));
    // 0x103528: 0x782d
    ctx->pc = 0x103528u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10352c: 0x24080007
    ctx->pc = 0x10352cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 7));
    // 0x103530: 0xfdc90038
    ctx->pc = 0x103530u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 9));
    // 0x103534: 0xfdcb0048
    ctx->pc = 0x103534u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 11));
    // 0x103538: 0xfdc70050
    ctx->pc = 0x103538u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 7));
    // 0x10353c: 0xfdcc0058
    ctx->pc = 0x10353cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 88), GPR_U64(ctx, 12));
    // 0x103540: 0xfdcd0068
    ctx->pc = 0x103540u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 104), GPR_U64(ctx, 13));
    // 0x103544: 0xadca0000
    ctx->pc = 0x103544u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
    // 0x103548: 0xfdc00020
    ctx->pc = 0x103548u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 0));
    // 0x10354c: 0xfdc00040
    ctx->pc = 0x10354cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 0));
    // 0x103550: 0x18a00030
    ctx->pc = 0x103550u;
    {
        const bool branch_taken_0x103550 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x103554u;
        WRITE64(ADD32(GPR_U32(ctx, 14), 96), GPR_U64(ctx, 0));
        if (branch_taken_0x103550) {
            ctx->pc = 0x103614u;
            goto label_103614;
        }
    }
    ctx->pc = 0x103558u;
    // 0x103558: 0x1c0502d
    ctx->pc = 0x103558u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10355c: 0x3c091000
    ctx->pc = 0x10355cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)4096 << 16));
    // 0x103560: 0x35290001
    ctx->pc = 0x103560u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 1));
    // 0x103564: 0x240e0001
    ctx->pc = 0x103564u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 1));
    // 0x103568: 0x240d2000
    ctx->pc = 0x103568u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x10356c: 0x340c8000
    ctx->pc = 0x10356cu;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 0), 32768));
    // 0x103570: 0xc633c
    ctx->pc = 0x103570u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 12));
    // 0x103574: 0x3c0b3000
    ctx->pc = 0x103574u;
    SET_GPR_U32(ctx, 11, ((uint32_t)12288 << 16));
    // 0x103578: 0x25460070
    ctx->pc = 0x103578u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 10), 112));
    // 0x10357c: 0x0
    ctx->pc = 0x10357cu;
    // NOP
label_103580:
    // 0x103580: 0x700014a9
    ctx->pc = 0x103580u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103584: 0x25080001
    ctx->pc = 0x103584u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x103588: 0x7cc20000
    ctx->pc = 0x103588u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10358c: 0x1a5102a
    ctx->pc = 0x10358cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 5)));
    // 0x103590: 0xacc90000
    ctx->pc = 0x103590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x103594: 0x1c2780a
    ctx->pc = 0x103594u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 15, GPR_U32(ctx, 14));
    // 0x103598: 0x28a22001
    ctx->pc = 0x103598u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8193));
    // 0x10359c: 0x14400004
    ctx->pc = 0x10359Cu;
    {
        const bool branch_taken_0x10359c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1035A0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
        if (branch_taken_0x10359c) {
            ctx->pc = 0x1035B0u;
            goto label_1035b0;
        }
    }
    ctx->pc = 0x1035A4u;
    // 0x1035a4: 0x24072000
    ctx->pc = 0x1035a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1035a8: 0x10000003
    ctx->pc = 0x1035A8u;
    {
        const bool branch_taken_0x1035a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1035ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959104));
        if (branch_taken_0x1035a8) {
            ctx->pc = 0x1035B8u;
            goto label_1035b8;
        }
    }
    ctx->pc = 0x1035B0u;
label_1035b0:
    // 0x1035b0: 0xa0382d
    ctx->pc = 0x1035b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035b4: 0x282d
    ctx->pc = 0x1035b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1035b8:
    // 0x1035b8: 0x1e0102d
    ctx->pc = 0x1035b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035bc: 0xfcc00008
    ctx->pc = 0x1035bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x1035c0: 0x213f8
    ctx->pc = 0x1035c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x1035c4: 0x25080001
    ctx->pc = 0x1035c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1035c8: 0xe21025
    ctx->pc = 0x1035c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1035cc: 0x82100
    ctx->pc = 0x1035ccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 4));
    // 0x1035d0: 0x4c1025
    ctx->pc = 0x1035d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1035d4: 0xfcc20000
    ctx->pc = 0x1035d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1035d8: 0x24c60010
    ctx->pc = 0x1035d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x1035dc: 0x700014a9
    ctx->pc = 0x1035dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1035e0: 0x15e00002
    ctx->pc = 0x1035E0u;
    {
        const bool branch_taken_0x1035e0 = (GPR_U32(ctx, 15) != GPR_U32(ctx, 0));
        ctx->pc = 0x1035E4u;
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        if (branch_taken_0x1035e0) {
            ctx->pc = 0x1035ECu;
            goto label_1035ec;
        }
    }
    ctx->pc = 0x1035E8u;
    // 0x1035e8: 0xaccb0000
    ctx->pc = 0x1035e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
label_1035ec:
    // 0x1035ec: 0x8a1021
    ctx->pc = 0x1035ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1035f0: 0x24c60010
    ctx->pc = 0x1035f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x1035f4: 0x8c430000
    ctx->pc = 0x1035f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1035f8: 0x72100
    ctx->pc = 0x1035f8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 4));
    // 0x1035fc: 0xac580004
    ctx->pc = 0x1035fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 24));
    // 0x103600: 0x25080001
    ctx->pc = 0x103600u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x103604: 0x671825
    ctx->pc = 0x103604u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x103608: 0x304c021
    ctx->pc = 0x103608u;
    SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x10360c: 0x1ca0ffdc
    ctx->pc = 0x10360Cu;
    {
        const bool branch_taken_0x10360c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x103610u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x10360c) {
            ctx->pc = 0x103580u;
            goto label_103580;
        }
    }
    ctx->pc = 0x103614u;
label_103614:
    // 0x103614: 0x8f8382b8
    ctx->pc = 0x103614u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103618: 0x81100
    ctx->pc = 0x103618u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 4));
    // 0x10361c: 0x700034a9
    ctx->pc = 0x10361cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103620: 0x3c057000
    ctx->pc = 0x103620u;
    SET_GPR_U32(ctx, 5, ((uint32_t)28672 << 16));
    // 0x103624: 0x431021
    ctx->pc = 0x103624u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103628: 0x202d
    ctx->pc = 0x103628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10362c: 0x7c460000
    ctx->pc = 0x10362cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x103630: 0xc043948
    ctx->pc = 0x103630u;
    SET_GPR_U32(ctx, 31, 0x103638u);
    ctx->pc = 0x103634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103638u; }
    }
    if (ctx->pc != 0x103638u) { return; }
    ctx->pc = 0x103638u;
    // 0x103638: 0x202d
    ctx->pc = 0x103638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10363c: 0xc043322
    ctx->pc = 0x10363Cu;
    SET_GPR_U32(ctx, 31, 0x103644u);
    ctx->pc = 0x103640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103644u; }
    }
    if (ctx->pc != 0x103644u) { return; }
    ctx->pc = 0x103644u;
    // 0x103644: 0x8f848490
    ctx->pc = 0x103644u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103648: 0x302d
    ctx->pc = 0x103648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10364c: 0xc04372a
    ctx->pc = 0x10364Cu;
    SET_GPR_U32(ctx, 31, 0x103654u);
    ctx->pc = 0x103650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103654u; }
    }
    if (ctx->pc != 0x103654u) { return; }
    ctx->pc = 0x103654u;
    // 0x103654: 0x8f8382b8
    ctx->pc = 0x103654u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103658: 0x3c050fff
    ctx->pc = 0x103658u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x10365c: 0x34a5ffff
    ctx->pc = 0x10365cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x103660: 0x8f848490
    ctx->pc = 0x103660u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103664: 0xc0435d6
    ctx->pc = 0x103664u;
    SET_GPR_U32(ctx, 31, 0x10366Cu);
    ctx->pc = 0x103668u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10366Cu; }
    }
    if (ctx->pc != 0x10366Cu) { return; }
    ctx->pc = 0x10366Cu;
    // 0x10366c: 0x202d
    ctx->pc = 0x10366cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103670: 0xc043322
    ctx->pc = 0x103670u;
    SET_GPR_U32(ctx, 31, 0x103678u);
    ctx->pc = 0x103674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103678u; }
    }
    if (ctx->pc != 0x103678u) { return; }
    ctx->pc = 0x103678u;
    // 0x103678: 0x2302021
    ctx->pc = 0x103678u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x10367c: 0x2403ffff
    ctx->pc = 0x10367cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103680: 0x64182a
    ctx->pc = 0x103680u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x103684: 0x24820fff
    ctx->pc = 0x103684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4095));
    // 0x103688: 0x83100b
    ctx->pc = 0x103688u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x10368c: 0xdfbf0030
    ctx->pc = 0x10368cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103690: 0x21303
    ctx->pc = 0x103690u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x103694: 0xdfb10010
    ctx->pc = 0x103694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103698: 0x24420001
    ctx->pc = 0x103698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x10369c: 0xdfb00000
    ctx->pc = 0x10369cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1036a0: 0x21100
    ctx->pc = 0x1036a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1036a4: 0x2421021
    ctx->pc = 0x1036a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1036a8: 0xdfb20020
    ctx->pc = 0x1036a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1036ac: 0x3e00008
    ctx->pc = 0x1036ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1036B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103580u: goto label_103580;
            case 0x1035B0u: goto label_1035b0;
            case 0x1035B8u: goto label_1035b8;
            case 0x1035ECu: goto label_1035ec;
            case 0x103614u: goto label_103614;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1036B4u;
}
