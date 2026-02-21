#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_poll
// Address: 0x223950 - 0x223a34
void aud_poll_0x223950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223950u;

label_223950:
    // 0x223950: 0x27bdffe0
    ctx->pc = 0x223950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_223954:
    // 0x223954: 0xffbf0010
    ctx->pc = 0x223954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_223958:
    // 0x223958: 0xffb00000
    ctx->pc = 0x223958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22395c:
    // 0x22395c: 0xc0c14c6
label_223960:
    if (ctx->pc == 0x223960u) {
        ctx->pc = 0x223960u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x223964u;
        goto label_223964;
    }
    ctx->pc = 0x22395Cu;
    SET_GPR_U32(ctx, 31, 0x223964u);
    ctx->pc = 0x223960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 29));
    ctx->pc = 0x305318u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifGetSreg_0x305318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223964u; }
    }
    if (ctx->pc != 0x223964u) { return; }
    ctx->pc = 0x223964u;
label_223964:
    // 0x223964: 0x40802d
    ctx->pc = 0x223964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223968:
    // 0x223968: 0x12000011
label_22396c:
    if (ctx->pc == 0x22396Cu) {
        ctx->pc = 0x22396Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x223970u;
        goto label_223970;
    }
    ctx->pc = 0x223968u;
    {
        const bool branch_taken_0x223968 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x22396Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x223968) {
            ctx->pc = 0x2239B0u;
            goto label_2239b0;
        }
    }
    ctx->pc = 0x223970u;
label_223970:
    // 0x223970: 0xc0c14cc
label_223974:
    if (ctx->pc == 0x223974u) {
        ctx->pc = 0x223974u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223978u;
        goto label_223978;
    }
    ctx->pc = 0x223970u;
    SET_GPR_U32(ctx, 31, 0x223978u);
    ctx->pc = 0x223974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x305330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetSreg_0x305330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223978u; }
    }
    if (ctx->pc != 0x223978u) { return; }
    ctx->pc = 0x223978u;
label_223978:
    // 0x223978: 0x3c02003c
    ctx->pc = 0x223978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_22397c:
    // 0x22397c: 0x8c440f6c
    ctx->pc = 0x22397cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 3948)));
label_223980:
    // 0x223980: 0x6010006
label_223984:
    if (ctx->pc == 0x223984u) {
        ctx->pc = 0x223984u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 3948), GPR_U32(ctx, 0));
        ctx->pc = 0x223988u;
        goto label_223988;
    }
    ctx->pc = 0x223980u;
    {
        const bool branch_taken_0x223980 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x223984u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 3948), GPR_U32(ctx, 0));
        if (branch_taken_0x223980) {
            ctx->pc = 0x22399Cu;
            goto label_22399c;
        }
    }
    ctx->pc = 0x223988u;
label_223988:
    // 0x223988: 0x24020002
    ctx->pc = 0x223988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_22398c:
    // 0x22398c: 0xac820008
    ctx->pc = 0x22398cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_223990:
    // 0x223990: 0xac80000c
    ctx->pc = 0x223990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_223994:
    // 0x223994: 0x10000004
label_223998:
    if (ctx->pc == 0x223998u) {
        ctx->pc = 0x223998u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x22399Cu;
        goto label_22399c;
    }
    ctx->pc = 0x223994u;
    {
        const bool branch_taken_0x223994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223998u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
        if (branch_taken_0x223994) {
            ctx->pc = 0x2239A8u;
            goto label_2239a8;
        }
    }
    ctx->pc = 0x22399Cu;
label_22399c:
    // 0x22399c: 0xac800008
    ctx->pc = 0x22399cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2239a0:
    // 0x2239a0: 0xac90000c
    ctx->pc = 0x2239a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
label_2239a4:
    // 0x2239a4: 0x8c820010
    ctx->pc = 0x2239a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2239a8:
    // 0x2239a8: 0x40f809
label_2239ac:
    if (ctx->pc == 0x2239ACu) {
        ctx->pc = 0x2239B0u;
        goto label_2239b0;
    }
    ctx->pc = 0x2239A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2239B0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223950u: goto label_223950;
            case 0x223954u: goto label_223954;
            case 0x223958u: goto label_223958;
            case 0x22395Cu: goto label_22395c;
            case 0x223960u: goto label_223960;
            case 0x223964u: goto label_223964;
            case 0x223968u: goto label_223968;
            case 0x22396Cu: goto label_22396c;
            case 0x223970u: goto label_223970;
            case 0x223974u: goto label_223974;
            case 0x223978u: goto label_223978;
            case 0x22397Cu: goto label_22397c;
            case 0x223980u: goto label_223980;
            case 0x223984u: goto label_223984;
            case 0x223988u: goto label_223988;
            case 0x22398Cu: goto label_22398c;
            case 0x223990u: goto label_223990;
            case 0x223994u: goto label_223994;
            case 0x223998u: goto label_223998;
            case 0x22399Cu: goto label_22399c;
            case 0x2239A0u: goto label_2239a0;
            case 0x2239A4u: goto label_2239a4;
            case 0x2239A8u: goto label_2239a8;
            case 0x2239ACu: goto label_2239ac;
            case 0x2239B0u: goto label_2239b0;
            case 0x2239B4u: goto label_2239b4;
            case 0x2239B8u: goto label_2239b8;
            case 0x2239BCu: goto label_2239bc;
            case 0x2239C0u: goto label_2239c0;
            case 0x2239C4u: goto label_2239c4;
            case 0x2239C8u: goto label_2239c8;
            case 0x2239CCu: goto label_2239cc;
            case 0x2239D0u: goto label_2239d0;
            case 0x2239D4u: goto label_2239d4;
            case 0x2239D8u: goto label_2239d8;
            case 0x2239DCu: goto label_2239dc;
            case 0x2239E0u: goto label_2239e0;
            case 0x2239E4u: goto label_2239e4;
            case 0x2239E8u: goto label_2239e8;
            case 0x2239ECu: goto label_2239ec;
            case 0x2239F0u: goto label_2239f0;
            case 0x2239F4u: goto label_2239f4;
            case 0x2239F8u: goto label_2239f8;
            case 0x2239FCu: goto label_2239fc;
            case 0x223A00u: goto label_223a00;
            case 0x223A04u: goto label_223a04;
            case 0x223A08u: goto label_223a08;
            case 0x223A0Cu: goto label_223a0c;
            case 0x223A10u: goto label_223a10;
            case 0x223A14u: goto label_223a14;
            case 0x223A18u: goto label_223a18;
            case 0x223A1Cu: goto label_223a1c;
            case 0x223A20u: goto label_223a20;
            case 0x223A24u: goto label_223a24;
            case 0x223A28u: goto label_223a28;
            case 0x223A2Cu: goto label_223a2c;
            case 0x223A30u: goto label_223a30;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2239B0u; }
            if (ctx->pc != 0x2239B0u) { return; }
        }
    }
    ctx->pc = 0x2239B0u;
label_2239b0:
    // 0x2239b0: 0xc0c14c6
label_2239b4:
    if (ctx->pc == 0x2239B4u) {
        ctx->pc = 0x2239B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2239B8u;
        goto label_2239b8;
    }
    ctx->pc = 0x2239B0u;
    SET_GPR_U32(ctx, 31, 0x2239B8u);
    ctx->pc = 0x2239B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x305318u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifGetSreg_0x305318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239B8u; }
    }
    if (ctx->pc != 0x2239B8u) { return; }
    ctx->pc = 0x2239B8u;
label_2239b8:
    // 0x2239b8: 0x40802d
    ctx->pc = 0x2239b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2239bc:
    // 0x2239bc: 0x1a000018
label_2239c0:
    if (ctx->pc == 0x2239C0u) {
        ctx->pc = 0x2239C0u;
        SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
        ctx->pc = 0x2239C4u;
        goto label_2239c4;
    }
    ctx->pc = 0x2239BCu;
    {
        const bool branch_taken_0x2239bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2239C0u;
        SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
        if (branch_taken_0x2239bc) {
            ctx->pc = 0x223A20u;
            goto label_223a20;
        }
    }
    ctx->pc = 0x2239C4u;
label_2239c4:
    // 0x2239c4: 0x3c05003c
    ctx->pc = 0x2239c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
label_2239c8:
    // 0x2239c8: 0x24a51000
    ctx->pc = 0x2239c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4096));
label_2239cc:
    // 0x2239cc: 0x8cc306f8
    ctx->pc = 0x2239ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 1784)));
label_2239d0:
    // 0x2239d0: 0x31080
    ctx->pc = 0x2239d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2239d4:
    // 0x2239d4: 0x451021
    ctx->pc = 0x2239d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2239d8:
    // 0x2239d8: 0x240455af
    ctx->pc = 0x2239d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21935));
label_2239dc:
    // 0x2239dc: 0xac440000
    ctx->pc = 0x2239dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2239e0:
    // 0x2239e0: 0x24630001
    ctx->pc = 0x2239e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2239e4:
    // 0x2239e4: 0x31080
    ctx->pc = 0x2239e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2239e8:
    // 0x2239e8: 0x451021
    ctx->pc = 0x2239e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2239ec:
    // 0x2239ec: 0x3c040031
    ctx->pc = 0x2239ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
label_2239f0:
    // 0x2239f0: 0x8c841b94
    ctx->pc = 0x2239f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7060)));
label_2239f4:
    // 0x2239f4: 0xac440000
    ctx->pc = 0x2239f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2239f8:
    // 0x2239f8: 0x24630001
    ctx->pc = 0x2239f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2239fc:
    // 0x2239fc: 0xc088d72
label_223a00:
    if (ctx->pc == 0x223A00u) {
        ctx->pc = 0x223A00u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 1784), GPR_U32(ctx, 3));
        ctx->pc = 0x223A04u;
        goto label_223a04;
    }
    ctx->pc = 0x2239FCu;
    SET_GPR_U32(ctx, 31, 0x223A04u);
    ctx->pc = 0x223A00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1784), GPR_U32(ctx, 3));
    ctx->pc = 0x2235C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mput_flush_0x2235c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A04u; }
    }
    if (ctx->pc != 0x223A04u) { return; }
    ctx->pc = 0x223A04u;
label_223a04:
    // 0x223a04: 0x14400007
label_223a08:
    if (ctx->pc == 0x223A08u) {
        ctx->pc = 0x223A08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223A0Cu;
        goto label_223a0c;
    }
    ctx->pc = 0x223A04u;
    {
        const bool branch_taken_0x223a04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x223A08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x223a04) {
            ctx->pc = 0x223A24u;
            goto label_223a24;
        }
    }
    ctx->pc = 0x223A0Cu;
label_223a0c:
    // 0x223a0c: 0xc088cb6
label_223a10:
    if (ctx->pc == 0x223A10u) {
        ctx->pc = 0x223A14u;
        goto label_223a14;
    }
    ctx->pc = 0x223A0Cu;
    SET_GPR_U32(ctx, 31, 0x223A14u);
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A14u; }
    }
    if (ctx->pc != 0x223A14u) { return; }
    ctx->pc = 0x223A14u;
label_223a14:
    // 0x223a14: 0x24040002
    ctx->pc = 0x223a14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_223a18:
    // 0x223a18: 0xc088ce8
label_223a1c:
    if (ctx->pc == 0x223A1Cu) {
        ctx->pc = 0x223A1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223A20u;
        goto label_223a20;
    }
    ctx->pc = 0x223A18u;
    SET_GPR_U32(ctx, 31, 0x223A20u);
    ctx->pc = 0x223A1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A20u; }
    }
    if (ctx->pc != 0x223A20u) { return; }
    ctx->pc = 0x223A20u;
label_223a20:
    // 0x223a20: 0x200102d
    ctx->pc = 0x223a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223a24:
    // 0x223a24: 0xdfbf0010
    ctx->pc = 0x223a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_223a28:
    // 0x223a28: 0xdfb00000
    ctx->pc = 0x223a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_223a2c:
    // 0x223a2c: 0x3e00008
label_223a30:
    if (ctx->pc == 0x223A30u) {
        ctx->pc = 0x223A30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x223A34u;
        goto label_fallthrough_0x223a2c;
    }
    ctx->pc = 0x223A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223A30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223950u: goto label_223950;
            case 0x223954u: goto label_223954;
            case 0x223958u: goto label_223958;
            case 0x22395Cu: goto label_22395c;
            case 0x223960u: goto label_223960;
            case 0x223964u: goto label_223964;
            case 0x223968u: goto label_223968;
            case 0x22396Cu: goto label_22396c;
            case 0x223970u: goto label_223970;
            case 0x223974u: goto label_223974;
            case 0x223978u: goto label_223978;
            case 0x22397Cu: goto label_22397c;
            case 0x223980u: goto label_223980;
            case 0x223984u: goto label_223984;
            case 0x223988u: goto label_223988;
            case 0x22398Cu: goto label_22398c;
            case 0x223990u: goto label_223990;
            case 0x223994u: goto label_223994;
            case 0x223998u: goto label_223998;
            case 0x22399Cu: goto label_22399c;
            case 0x2239A0u: goto label_2239a0;
            case 0x2239A4u: goto label_2239a4;
            case 0x2239A8u: goto label_2239a8;
            case 0x2239ACu: goto label_2239ac;
            case 0x2239B0u: goto label_2239b0;
            case 0x2239B4u: goto label_2239b4;
            case 0x2239B8u: goto label_2239b8;
            case 0x2239BCu: goto label_2239bc;
            case 0x2239C0u: goto label_2239c0;
            case 0x2239C4u: goto label_2239c4;
            case 0x2239C8u: goto label_2239c8;
            case 0x2239CCu: goto label_2239cc;
            case 0x2239D0u: goto label_2239d0;
            case 0x2239D4u: goto label_2239d4;
            case 0x2239D8u: goto label_2239d8;
            case 0x2239DCu: goto label_2239dc;
            case 0x2239E0u: goto label_2239e0;
            case 0x2239E4u: goto label_2239e4;
            case 0x2239E8u: goto label_2239e8;
            case 0x2239ECu: goto label_2239ec;
            case 0x2239F0u: goto label_2239f0;
            case 0x2239F4u: goto label_2239f4;
            case 0x2239F8u: goto label_2239f8;
            case 0x2239FCu: goto label_2239fc;
            case 0x223A00u: goto label_223a00;
            case 0x223A04u: goto label_223a04;
            case 0x223A08u: goto label_223a08;
            case 0x223A0Cu: goto label_223a0c;
            case 0x223A10u: goto label_223a10;
            case 0x223A14u: goto label_223a14;
            case 0x223A18u: goto label_223a18;
            case 0x223A1Cu: goto label_223a1c;
            case 0x223A20u: goto label_223a20;
            case 0x223A24u: goto label_223a24;
            case 0x223A28u: goto label_223a28;
            case 0x223A2Cu: goto label_223a2c;
            case 0x223A30u: goto label_223a30;
            default: break;
        }
        return;
    }
label_fallthrough_0x223a2c:
    ctx->pc = 0x223A34u;
}
