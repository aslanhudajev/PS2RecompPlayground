#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdDestroy
// Address: 0x18c950 - 0x18ca0c
void mwSfdDestroy_0x18c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdDestroy");


    ctx->pc = 0x18c950u;

label_18c950:
    // 0x18c950: 0x27bdffe0
    ctx->pc = 0x18c950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_18c954:
    // 0x18c954: 0xffb00000
    ctx->pc = 0x18c954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18c958:
    // 0x18c958: 0x80802d
    ctx->pc = 0x18c958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c95c:
    // 0x18c95c: 0x12000027
label_18c960:
    if (ctx->pc == 0x18C960u) {
        ctx->pc = 0x18C960u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x18C964u;
        goto label_18c964;
    }
    ctx->pc = 0x18C95Cu;
    {
        const bool branch_taken_0x18c95c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C960u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x18c95c) {
            ctx->pc = 0x18C9FCu;
            goto label_18c9fc;
        }
    }
    ctx->pc = 0x18C964u;
label_18c964:
    // 0x18c964: 0xc06335a
label_18c968:
    if (ctx->pc == 0x18C968u) {
        ctx->pc = 0x18C96Cu;
        goto label_18c96c;
    }
    ctx->pc = 0x18C964u;
    SET_GPR_U32(ctx, 31, 0x18C96Cu);
    ctx->pc = 0x18CD68u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdStopDec_0x18cd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C96Cu; }
        else if (ctx->pc != 0x18C96Cu) { ctx->pc = 0x18C96Cu; }
    }
    if (ctx->pc != 0x18C96Cu) { return; }
    ctx->pc = 0x18C96Cu;
label_18c96c:
    // 0x18c96c: 0x8e040080
    ctx->pc = 0x18c96cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_18c970:
    // 0x18c970: 0x10800003
label_18c974:
    if (ctx->pc == 0x18C974u) {
        ctx->pc = 0x18C974u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x18C978u;
        goto label_18c978;
    }
    ctx->pc = 0x18C970u;
    {
        const bool branch_taken_0x18c970 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C974u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x18c970) {
            ctx->pc = 0x18C980u;
            goto label_18c980;
        }
    }
    ctx->pc = 0x18C978u;
label_18c978:
    // 0x18c978: 0xc05e7dc
label_18c97c:
    if (ctx->pc == 0x18C97Cu) {
        ctx->pc = 0x18C980u;
        goto label_18c980;
    }
    ctx->pc = 0x18C978u;
    SET_GPR_U32(ctx, 31, 0x18C980u);
    ctx->pc = 0x179F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Destroy_0x179f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C980u; }
        else if (ctx->pc != 0x18C980u) { ctx->pc = 0x18C980u; }
    }
    if (ctx->pc != 0x18C980u) { return; }
    ctx->pc = 0x18C980u;
label_18c980:
    // 0x18c980: 0x8e040034
    ctx->pc = 0x18c980u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_18c984:
    // 0x18c984: 0x50800004
label_18c988:
    if (ctx->pc == 0x18C988u) {
        ctx->pc = 0x18C988u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x18C98Cu;
        goto label_18c98c;
    }
    ctx->pc = 0x18C984u;
    {
        const bool branch_taken_0x18c984 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c984) {
            ctx->pc = 0x18C988u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->pc = 0x18C998u;
            goto label_18c998;
        }
    }
    ctx->pc = 0x18C98Cu;
label_18c98c:
    // 0x18c98c: 0xc063e18
label_18c990:
    if (ctx->pc == 0x18C990u) {
        ctx->pc = 0x18C994u;
        goto label_18c994;
    }
    ctx->pc = 0x18C98Cu;
    SET_GPR_U32(ctx, 31, 0x18C994u);
    ctx->pc = 0x18F860u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_Close_0x18f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C994u; }
        else if (ctx->pc != 0x18C994u) { ctx->pc = 0x18C994u; }
    }
    if (ctx->pc != 0x18C994u) { return; }
    ctx->pc = 0x18C994u;
label_18c994:
    // 0x18c994: 0x8e040040
    ctx->pc = 0x18c994u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_18c998:
    // 0x18c998: 0x50800006
label_18c99c:
    if (ctx->pc == 0x18C99Cu) {
        ctx->pc = 0x18C99Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->pc = 0x18C9A0u;
        goto label_18c9a0;
    }
    ctx->pc = 0x18C998u;
    {
        const bool branch_taken_0x18c998 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c998) {
            ctx->pc = 0x18C99Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->pc = 0x18C9B4u;
            goto label_18c9b4;
        }
    }
    ctx->pc = 0x18C9A0u;
label_18c9a0:
    // 0x18c9a0: 0x8c830000
    ctx->pc = 0x18c9a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c9a4:
    // 0x18c9a4: 0x8c62000c
    ctx->pc = 0x18c9a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18c9a8:
    // 0x18c9a8: 0x40f809
label_18c9ac:
    if (ctx->pc == 0x18C9ACu) {
        ctx->pc = 0x18C9B0u;
        goto label_18c9b0;
    }
    ctx->pc = 0x18C9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C9B0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C950u: goto label_18c950;
            case 0x18C954u: goto label_18c954;
            case 0x18C958u: goto label_18c958;
            case 0x18C95Cu: goto label_18c95c;
            case 0x18C960u: goto label_18c960;
            case 0x18C964u: goto label_18c964;
            case 0x18C968u: goto label_18c968;
            case 0x18C96Cu: goto label_18c96c;
            case 0x18C970u: goto label_18c970;
            case 0x18C974u: goto label_18c974;
            case 0x18C978u: goto label_18c978;
            case 0x18C97Cu: goto label_18c97c;
            case 0x18C980u: goto label_18c980;
            case 0x18C984u: goto label_18c984;
            case 0x18C988u: goto label_18c988;
            case 0x18C98Cu: goto label_18c98c;
            case 0x18C990u: goto label_18c990;
            case 0x18C994u: goto label_18c994;
            case 0x18C998u: goto label_18c998;
            case 0x18C99Cu: goto label_18c99c;
            case 0x18C9A0u: goto label_18c9a0;
            case 0x18C9A4u: goto label_18c9a4;
            case 0x18C9A8u: goto label_18c9a8;
            case 0x18C9ACu: goto label_18c9ac;
            case 0x18C9B0u: goto label_18c9b0;
            case 0x18C9B4u: goto label_18c9b4;
            case 0x18C9B8u: goto label_18c9b8;
            case 0x18C9BCu: goto label_18c9bc;
            case 0x18C9C0u: goto label_18c9c0;
            case 0x18C9C4u: goto label_18c9c4;
            case 0x18C9C8u: goto label_18c9c8;
            case 0x18C9CCu: goto label_18c9cc;
            case 0x18C9D0u: goto label_18c9d0;
            case 0x18C9D4u: goto label_18c9d4;
            case 0x18C9D8u: goto label_18c9d8;
            case 0x18C9DCu: goto label_18c9dc;
            case 0x18C9E0u: goto label_18c9e0;
            case 0x18C9E4u: goto label_18c9e4;
            case 0x18C9E8u: goto label_18c9e8;
            case 0x18C9ECu: goto label_18c9ec;
            case 0x18C9F0u: goto label_18c9f0;
            case 0x18C9F4u: goto label_18c9f4;
            case 0x18C9F8u: goto label_18c9f8;
            case 0x18C9FCu: goto label_18c9fc;
            case 0x18CA00u: goto label_18ca00;
            case 0x18CA04u: goto label_18ca04;
            case 0x18CA08u: goto label_18ca08;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18C9B0u; }
            if (ctx->pc != 0x18C9B0u) { return; }
        }
    }
    ctx->pc = 0x18C9B0u;
label_18c9b0:
    // 0x18c9b0: 0x8e04003c
    ctx->pc = 0x18c9b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_18c9b4:
    // 0x18c9b4: 0x50800006
label_18c9b8:
    if (ctx->pc == 0x18C9B8u) {
        ctx->pc = 0x18C9B8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x18C9BCu;
        goto label_18c9bc;
    }
    ctx->pc = 0x18C9B4u;
    {
        const bool branch_taken_0x18c9b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c9b4) {
            ctx->pc = 0x18C9B8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->pc = 0x18C9D0u;
            goto label_18c9d0;
        }
    }
    ctx->pc = 0x18C9BCu;
label_18c9bc:
    // 0x18c9bc: 0x8c830000
    ctx->pc = 0x18c9bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c9c0:
    // 0x18c9c0: 0x8c62000c
    ctx->pc = 0x18c9c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18c9c4:
    // 0x18c9c4: 0x40f809
label_18c9c8:
    if (ctx->pc == 0x18C9C8u) {
        ctx->pc = 0x18C9CCu;
        goto label_18c9cc;
    }
    ctx->pc = 0x18C9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C9CCu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C950u: goto label_18c950;
            case 0x18C954u: goto label_18c954;
            case 0x18C958u: goto label_18c958;
            case 0x18C95Cu: goto label_18c95c;
            case 0x18C960u: goto label_18c960;
            case 0x18C964u: goto label_18c964;
            case 0x18C968u: goto label_18c968;
            case 0x18C96Cu: goto label_18c96c;
            case 0x18C970u: goto label_18c970;
            case 0x18C974u: goto label_18c974;
            case 0x18C978u: goto label_18c978;
            case 0x18C97Cu: goto label_18c97c;
            case 0x18C980u: goto label_18c980;
            case 0x18C984u: goto label_18c984;
            case 0x18C988u: goto label_18c988;
            case 0x18C98Cu: goto label_18c98c;
            case 0x18C990u: goto label_18c990;
            case 0x18C994u: goto label_18c994;
            case 0x18C998u: goto label_18c998;
            case 0x18C99Cu: goto label_18c99c;
            case 0x18C9A0u: goto label_18c9a0;
            case 0x18C9A4u: goto label_18c9a4;
            case 0x18C9A8u: goto label_18c9a8;
            case 0x18C9ACu: goto label_18c9ac;
            case 0x18C9B0u: goto label_18c9b0;
            case 0x18C9B4u: goto label_18c9b4;
            case 0x18C9B8u: goto label_18c9b8;
            case 0x18C9BCu: goto label_18c9bc;
            case 0x18C9C0u: goto label_18c9c0;
            case 0x18C9C4u: goto label_18c9c4;
            case 0x18C9C8u: goto label_18c9c8;
            case 0x18C9CCu: goto label_18c9cc;
            case 0x18C9D0u: goto label_18c9d0;
            case 0x18C9D4u: goto label_18c9d4;
            case 0x18C9D8u: goto label_18c9d8;
            case 0x18C9DCu: goto label_18c9dc;
            case 0x18C9E0u: goto label_18c9e0;
            case 0x18C9E4u: goto label_18c9e4;
            case 0x18C9E8u: goto label_18c9e8;
            case 0x18C9ECu: goto label_18c9ec;
            case 0x18C9F0u: goto label_18c9f0;
            case 0x18C9F4u: goto label_18c9f4;
            case 0x18C9F8u: goto label_18c9f8;
            case 0x18C9FCu: goto label_18c9fc;
            case 0x18CA00u: goto label_18ca00;
            case 0x18CA04u: goto label_18ca04;
            case 0x18CA08u: goto label_18ca08;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18C9CCu; }
            if (ctx->pc != 0x18C9CCu) { return; }
        }
    }
    ctx->pc = 0x18C9CCu;
label_18c9cc:
    // 0x18c9cc: 0x8e040030
    ctx->pc = 0x18c9ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18c9d0:
    // 0x18c9d0: 0x50800004
label_18c9d4:
    if (ctx->pc == 0x18C9D4u) {
        ctx->pc = 0x18C9D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18C9D8u;
        goto label_18c9d8;
    }
    ctx->pc = 0x18C9D0u;
    {
        const bool branch_taken_0x18c9d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c9d0) {
            ctx->pc = 0x18C9D4u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x18C9E4u;
            goto label_18c9e4;
        }
    }
    ctx->pc = 0x18C9D8u;
label_18c9d8:
    // 0x18c9d8: 0xc063c2c
label_18c9dc:
    if (ctx->pc == 0x18C9DCu) {
        ctx->pc = 0x18C9E0u;
        goto label_18c9e0;
    }
    ctx->pc = 0x18C9D8u;
    SET_GPR_U32(ctx, 31, 0x18C9E0u);
    ctx->pc = 0x18F0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdDestroy_0x18f0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C9E0u; }
        else if (ctx->pc != 0x18C9E0u) { ctx->pc = 0x18C9E0u; }
    }
    if (ctx->pc != 0x18C9E0u) { return; }
    ctx->pc = 0x18C9E0u;
label_18c9e0:
    // 0x18c9e0: 0x200202d
    ctx->pc = 0x18c9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c9e4:
    // 0x18c9e4: 0xdfbf0010
    ctx->pc = 0x18c9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18c9e8:
    // 0x18c9e8: 0xdfb00000
    ctx->pc = 0x18c9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18c9ec:
    // 0x18c9ec: 0x282d
    ctx->pc = 0x18c9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c9f0:
    // 0x18c9f0: 0x24060090
    ctx->pc = 0x18c9f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 144));
label_18c9f4:
    // 0x18c9f4: 0x8050cfe
label_18c9f8:
    if (ctx->pc == 0x18C9F8u) {
        ctx->pc = 0x18C9F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x18C9FCu;
        goto label_18c9fc;
    }
    ctx->pc = 0x18C9F4u;
    ctx->pc = 0x18C9F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x18C9FCu;
label_18c9fc:
    // 0x18c9fc: 0xdfbf0010
    ctx->pc = 0x18c9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18ca00:
    // 0x18ca00: 0xdfb00000
    ctx->pc = 0x18ca00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ca04:
    // 0x18ca04: 0x3e00008
label_18ca08:
    if (ctx->pc == 0x18CA08u) {
        ctx->pc = 0x18CA08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x18CA0Cu;
        goto label_fallthrough_0x18ca04;
    }
    ctx->pc = 0x18CA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CA08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C950u: goto label_18c950;
            case 0x18C954u: goto label_18c954;
            case 0x18C958u: goto label_18c958;
            case 0x18C95Cu: goto label_18c95c;
            case 0x18C960u: goto label_18c960;
            case 0x18C964u: goto label_18c964;
            case 0x18C968u: goto label_18c968;
            case 0x18C96Cu: goto label_18c96c;
            case 0x18C970u: goto label_18c970;
            case 0x18C974u: goto label_18c974;
            case 0x18C978u: goto label_18c978;
            case 0x18C97Cu: goto label_18c97c;
            case 0x18C980u: goto label_18c980;
            case 0x18C984u: goto label_18c984;
            case 0x18C988u: goto label_18c988;
            case 0x18C98Cu: goto label_18c98c;
            case 0x18C990u: goto label_18c990;
            case 0x18C994u: goto label_18c994;
            case 0x18C998u: goto label_18c998;
            case 0x18C99Cu: goto label_18c99c;
            case 0x18C9A0u: goto label_18c9a0;
            case 0x18C9A4u: goto label_18c9a4;
            case 0x18C9A8u: goto label_18c9a8;
            case 0x18C9ACu: goto label_18c9ac;
            case 0x18C9B0u: goto label_18c9b0;
            case 0x18C9B4u: goto label_18c9b4;
            case 0x18C9B8u: goto label_18c9b8;
            case 0x18C9BCu: goto label_18c9bc;
            case 0x18C9C0u: goto label_18c9c0;
            case 0x18C9C4u: goto label_18c9c4;
            case 0x18C9C8u: goto label_18c9c8;
            case 0x18C9CCu: goto label_18c9cc;
            case 0x18C9D0u: goto label_18c9d0;
            case 0x18C9D4u: goto label_18c9d4;
            case 0x18C9D8u: goto label_18c9d8;
            case 0x18C9DCu: goto label_18c9dc;
            case 0x18C9E0u: goto label_18c9e0;
            case 0x18C9E4u: goto label_18c9e4;
            case 0x18C9E8u: goto label_18c9e8;
            case 0x18C9ECu: goto label_18c9ec;
            case 0x18C9F0u: goto label_18c9f0;
            case 0x18C9F4u: goto label_18c9f4;
            case 0x18C9F8u: goto label_18c9f8;
            case 0x18C9FCu: goto label_18c9fc;
            case 0x18CA00u: goto label_18ca00;
            case 0x18CA04u: goto label_18ca04;
            case 0x18CA08u: goto label_18ca08;
            default: break;
        }
        return;
    }
label_fallthrough_0x18ca04:
    ctx->pc = 0x18CA0Cu;
}
