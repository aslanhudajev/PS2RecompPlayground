#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeInfoAu
// Address: 0x167470 - 0x16757c
void ADX_DecodeInfoAu_0x167470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeInfoAu");


    ctx->pc = 0x167470u;

    // 0x167470: 0x27bdff70
    ctx->pc = 0x167470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x167474: 0x28a20008
    ctx->pc = 0x167474u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x167478: 0xffb60070
    ctx->pc = 0x167478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x16747c: 0xffb50060
    ctx->pc = 0x16747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x167480: 0x120b02d
    ctx->pc = 0x167480u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167484: 0xffb40050
    ctx->pc = 0x167484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x167488: 0xe0a82d
    ctx->pc = 0x167488u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16748c: 0xffb30040
    ctx->pc = 0x16748cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x167490: 0x100a02d
    ctx->pc = 0x167490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167494: 0xffb20030
    ctx->pc = 0x167494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x167498: 0x160982d
    ctx->pc = 0x167498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16749c: 0xffb10020
    ctx->pc = 0x16749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1674a0: 0x140902d
    ctx->pc = 0x1674a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674a4: 0xffb00010
    ctx->pc = 0x1674a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1674a8: 0xc0882d
    ctx->pc = 0x1674a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674ac: 0xffbf0080
    ctx->pc = 0x1674acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1674b0: 0x10400004
    ctx->pc = 0x1674B0u;
    {
        const bool branch_taken_0x1674b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1674B4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1674b0) {
            ctx->pc = 0x1674C4u;
            goto label_1674c4;
        }
    }
    ctx->pc = 0x1674B8u;
    // 0x1674b8: 0xa6200000
    ctx->pc = 0x1674b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_1674bc:
    // 0x1674bc: 0x10000025
    ctx->pc = 0x1674BCu;
    {
        const bool branch_taken_0x1674bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1674C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1674bc) {
            ctx->pc = 0x167554u;
            goto label_167554;
        }
    }
    ctx->pc = 0x1674C4u;
label_1674c4:
    // 0x1674c4: 0x8faa00a0
    ctx->pc = 0x1674c4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1674c8: 0x200202d
    ctx->pc = 0x1674c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674cc: 0x3a0302d
    ctx->pc = 0x1674ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674d0: 0x37a70004
    ctx->pc = 0x1674d0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 4));
    // 0x1674d4: 0x37a80008
    ctx->pc = 0x1674d4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 8));
    // 0x1674d8: 0xc059c42
    ctx->pc = 0x1674D8u;
    SET_GPR_U32(ctx, 31, 0x1674E0u);
    ctx->pc = 0x1674DCu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x167108u;
    {
        const uint32_t __entryPc = ctx->pc;
        AU_GetInfo_0x167108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1674E0u; }
        else if (ctx->pc != 0x1674E0u) { ctx->pc = 0x1674E0u; }
    }
    if (ctx->pc != 0x1674E0u) { return; }
    ctx->pc = 0x1674E0u;
    // 0x1674e0: 0x1040fff6
    ctx->pc = 0x1674E0u;
    {
        const bool branch_taken_0x1674e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1674E4u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        if (branch_taken_0x1674e0) {
            ctx->pc = 0x1674BCu;
            goto label_1674bc;
        }
    }
    ctx->pc = 0x1674E8u;
    // 0x1674e8: 0xa6220000
    ctx->pc = 0x1674e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1674ec: 0x21400
    ctx->pc = 0x1674ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1674f0: 0x1840fff2
    ctx->pc = 0x1674F0u;
    {
        const bool branch_taken_0x1674f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1674F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1674f0) {
            ctx->pc = 0x1674BCu;
            goto label_1674bc;
        }
    }
    ctx->pc = 0x1674F8u;
    // 0x1674f8: 0x2407ffff
    ctx->pc = 0x1674f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1674fc: 0x93a30004
    ctx->pc = 0x1674fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x167500: 0x2405ffff
    ctx->pc = 0x167500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167504: 0xae620000
    ctx->pc = 0x167504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x167508: 0x24080001
    ctx->pc = 0x167508u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16750c: 0x102d
    ctx->pc = 0x16750cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167510: 0x93a60008
    ctx->pc = 0x167510u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167514: 0xa2430000
    ctx->pc = 0x167514u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x167518: 0x8fa4000c
    ctx->pc = 0x167518u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16751c: 0xa2860000
    ctx->pc = 0x16751cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x167520: 0x8fa30090
    ctx->pc = 0x167520u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167524: 0xac640000
    ctx->pc = 0x167524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x167528: 0xa2a70000
    ctx->pc = 0x167528u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x16752c: 0x82830000
    ctx->pc = 0x16752cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x167530: 0x82440000
    ctx->pc = 0x167530u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x167534: 0x832018
    ctx->pc = 0x167534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x167538: 0xa4282a
    ctx->pc = 0x167538u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x16753c: 0x24830007
    ctx->pc = 0x16753cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 7));
    // 0x167540: 0x85180b
    ctx->pc = 0x167540u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x167544: 0x318c3
    ctx->pc = 0x167544u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x167548: 0xa2c30000
    ctx->pc = 0x167548u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x16754c: 0x8fa40098
    ctx->pc = 0x16754cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x167550: 0xac880000
    ctx->pc = 0x167550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_167554:
    // 0x167554: 0xdfbf0080
    ctx->pc = 0x167554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x167558: 0xdfb60070
    ctx->pc = 0x167558u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16755c: 0xdfb50060
    ctx->pc = 0x16755cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167560: 0xdfb40050
    ctx->pc = 0x167560u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167564: 0xdfb30040
    ctx->pc = 0x167564u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167568: 0xdfb20030
    ctx->pc = 0x167568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16756c: 0xdfb10020
    ctx->pc = 0x16756cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167570: 0xdfb00010
    ctx->pc = 0x167570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167574: 0x3e00008
    ctx->pc = 0x167574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167578u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1674BCu: goto label_1674bc;
            case 0x1674C4u: goto label_1674c4;
            case 0x167554u: goto label_167554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16757Cu;
}
