#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbRecordDmaStart
// Address: 0x2a6370 - 0x2a6520
void pbRecordDmaStart_0x2a6370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a6370u;

    // 0x2a6370: 0x27bdffd0
    ctx->pc = 0x2a6370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6374: 0xffbe0020
    ctx->pc = 0x2a6374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x2a6378: 0x3a0f02d
    ctx->pc = 0x2a6378u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a637c: 0xafc40000
    ctx->pc = 0x2a637cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a6380: 0x8fc20000
    ctx->pc = 0x2a6380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6384: 0x94430000
    ctx->pc = 0x2a6384u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6388: 0x31302
    ctx->pc = 0x2a6388u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 12));
    // 0x2a638c: 0x3043ffff
    ctx->pc = 0x2a638cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2a6390: 0xafc30004
    ctx->pc = 0x2a6390u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x2a6394: 0x8fc20004
    ctx->pc = 0x2a6394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6398: 0x28430003
    ctx->pc = 0x2a6398u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2a639c: 0x14600003
    ctx->pc = 0x2A639Cu;
    {
        const bool branch_taken_0x2a639c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a639c) {
            ctx->pc = 0x2A63ACu;
            goto label_2a63ac;
        }
    }
    ctx->pc = 0x2A63A4u;
    // 0x2a63a4: 0x10000059
    ctx->pc = 0x2A63A4u;
    {
        const bool branch_taken_0x2a63a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a63a4) {
            ctx->pc = 0x2A650Cu;
            goto label_2a650c;
        }
    }
    ctx->pc = 0x2A63ACu;
label_2a63ac:
    // 0x2a63ac: 0x8fc20004
    ctx->pc = 0x2a63acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a63b0: 0x2403001c
    ctx->pc = 0x2a63b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a63b4: 0x431018
    ctx->pc = 0x2a63b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a63b8: 0x24430008
    ctx->pc = 0x2a63b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a63bc: 0x3c020037
    ctx->pc = 0x2a63bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a63c0: 0x8c42807c
    ctx->pc = 0x2a63c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294934652)));
    // 0x2a63c4: 0x431821
    ctx->pc = 0x2a63c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a63c8: 0xafc30008
    ctx->pc = 0x2a63c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x2a63cc: 0x8fc30008
    ctx->pc = 0x2a63ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a63d0: 0x8fc20008
    ctx->pc = 0x2a63d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a63d4: 0x8fc30008
    ctx->pc = 0x2a63d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a63d8: 0x8c640018
    ctx->pc = 0x2a63d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a63dc: 0x24830001
    ctx->pc = 0x2a63dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a63e0: 0xac430018
    ctx->pc = 0x2a63e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2a63e4: 0x8fc20008
    ctx->pc = 0x2a63e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a63e8: 0x8c430014
    ctx->pc = 0x2a63e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a63ec: 0xafc30014
    ctx->pc = 0x2a63ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 3));
    // 0x2a63f0: 0x8fc20014
    ctx->pc = 0x2a63f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a63f4: 0x24430001
    ctx->pc = 0x2a63f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a63f8: 0xafc30014
    ctx->pc = 0x2a63f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 3));
    // 0x2a63fc: 0x8fc20014
    ctx->pc = 0x2a63fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6400: 0x28430014
    ctx->pc = 0x2a6400u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 20));
    // 0x2a6404: 0x14600002
    ctx->pc = 0x2A6404u;
    {
        const bool branch_taken_0x2a6404 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a6404) {
            ctx->pc = 0x2A6410u;
            goto label_2a6410;
        }
    }
    ctx->pc = 0x2A640Cu;
    // 0x2a640c: 0xafc00014
    ctx->pc = 0x2a640cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
label_2a6410:
    // 0x2a6410: 0x8fc20008
    ctx->pc = 0x2a6410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6414: 0x8fc30014
    ctx->pc = 0x2a6414u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6418: 0xac430014
    ctx->pc = 0x2a6418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2a641c: 0x8fc20008
    ctx->pc = 0x2a641cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6420: 0x8fc30014
    ctx->pc = 0x2a6420u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6424: 0x2404001c
    ctx->pc = 0x2a6424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a6428: 0x641818
    ctx->pc = 0x2a6428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a642c: 0x8c420010
    ctx->pc = 0x2a642cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a6430: 0x431821
    ctx->pc = 0x2a6430u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6434: 0xafc3000c
    ctx->pc = 0x2a6434u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x2a6438: 0x8fc20008
    ctx->pc = 0x2a6438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a643c: 0x8fc30008
    ctx->pc = 0x2a643cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6440: 0x8c640008
    ctx->pc = 0x2a6440u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a6444: 0xac44000c
    ctx->pc = 0x2a6444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x2a6448: 0x8fc20008
    ctx->pc = 0x2a6448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a644c: 0x8fc30008
    ctx->pc = 0x2a644cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6450: 0x8c640004
    ctx->pc = 0x2a6450u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a6454: 0xac440008
    ctx->pc = 0x2a6454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2a6458: 0x8fc20008
    ctx->pc = 0x2a6458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a645c: 0x8fc3000c
    ctx->pc = 0x2a645cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6460: 0xac430004
    ctx->pc = 0x2a6460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2a6464: 0x8fc20008
    ctx->pc = 0x2a6464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6468: 0x24030002
    ctx->pc = 0x2a6468u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a646c: 0xac430000
    ctx->pc = 0x2a646cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a6470: 0x8fc2000c
    ctx->pc = 0x2a6470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6474: 0x24030002
    ctx->pc = 0x2a6474u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6478: 0xac430000
    ctx->pc = 0x2a6478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a647c: 0x8fc2000c
    ctx->pc = 0x2a647cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6480: 0x8fc30000
    ctx->pc = 0x2a6480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6484: 0x94640000
    ctx->pc = 0x2a6484u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6488: 0xac440004
    ctx->pc = 0x2a6488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2a648c: 0x8fc2000c
    ctx->pc = 0x2a648cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6490: 0x8fc30000
    ctx->pc = 0x2a6490u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6494: 0x94640002
    ctx->pc = 0x2a6494u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a6498: 0xac440008
    ctx->pc = 0x2a6498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2a649c: 0x8fc2000c
    ctx->pc = 0x2a649cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a64a0: 0x8fc30000
    ctx->pc = 0x2a64a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a64a4: 0xac430018
    ctx->pc = 0x2a64a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2a64a8: 0x8fc20000
    ctx->pc = 0x2a64a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a64ac: 0x8c430004
    ctx->pc = 0x2a64acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a64b0: 0xafc30010
    ctx->pc = 0x2a64b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 3));
    // 0x2a64b4: 0x8fc20010
    ctx->pc = 0x2a64b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a64b8: 0x3c038000
    ctx->pc = 0x2a64b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x2a64bc: 0x431024
    ctx->pc = 0x2a64bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a64c0: 0x10400006
    ctx->pc = 0x2A64C0u;
    {
        const bool branch_taken_0x2a64c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a64c0) {
            ctx->pc = 0x2A64DCu;
            goto label_2a64dc;
        }
    }
    ctx->pc = 0x2A64C8u;
    // 0x2a64c8: 0x8fc30010
    ctx->pc = 0x2a64c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a64cc: 0x30623fff
    ctx->pc = 0x2a64ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16383));
    // 0x2a64d0: 0x3c037000
    ctx->pc = 0x2a64d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x2a64d4: 0x431025
    ctx->pc = 0x2a64d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a64d8: 0xafc20010
    ctx->pc = 0x2a64d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_2a64dc:
    // 0x2a64dc: 0x8fc2000c
    ctx->pc = 0x2a64dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a64e0: 0x8fc30010
    ctx->pc = 0x2a64e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a64e4: 0xac43000c
    ctx->pc = 0x2a64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2a64e8: 0x8fc2000c
    ctx->pc = 0x2a64e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a64ec: 0x8fc30010
    ctx->pc = 0x2a64ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a64f0: 0x8c640000
    ctx->pc = 0x2a64f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a64f4: 0xac440010
    ctx->pc = 0x2a64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x2a64f8: 0x8fc2000c
    ctx->pc = 0x2a64f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a64fc: 0x8fc40010
    ctx->pc = 0x2a64fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6500: 0x24830004
    ctx->pc = 0x2a6500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a6504: 0x8c640000
    ctx->pc = 0x2a6504u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6508: 0xac440014
    ctx->pc = 0x2a6508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_2a650c:
    // 0x2a650c: 0x3c0e82d
    ctx->pc = 0x2a650cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6510: 0xdfbe0020
    ctx->pc = 0x2a6510u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6514: 0x27bd0030
    ctx->pc = 0x2a6514u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a6518: 0x3e00008
    ctx->pc = 0x2A6518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A63ACu: goto label_2a63ac;
            case 0x2A6410u: goto label_2a6410;
            case 0x2A64DCu: goto label_2a64dc;
            case 0x2A650Cu: goto label_2a650c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A6520u;
}
