#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_ExcludeHdr
// Address: 0x190260 - 0x19030c
void sfadxt_ExcludeHdr_0x190260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_ExcludeHdr");


    ctx->pc = 0x190260u;

    // 0x190260: 0x27bdff90
    ctx->pc = 0x190260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x190264: 0xffb30040
    ctx->pc = 0x190264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x190268: 0xffb20030
    ctx->pc = 0x190268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19026c: 0xe0982d
    ctx->pc = 0x19026cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190270: 0xffb00010
    ctx->pc = 0x190270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x190274: 0xc0902d
    ctx->pc = 0x190274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190278: 0xffb40050
    ctx->pc = 0x190278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x19027c: 0x80802d
    ctx->pc = 0x19027cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190280: 0xffb10020
    ctx->pc = 0x190280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x190284: 0x26143e20
    ctx->pc = 0x190284u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 15904));
    // 0x190288: 0xffbf0060
    ctx->pc = 0x190288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19028c: 0xa0882d
    ctx->pc = 0x19028cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190290: 0x2a420120
    ctx->pc = 0x190290u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 288));
    // 0x190294: 0x14400015
    ctx->pc = 0x190294u;
    {
        const bool branch_taken_0x190294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x190298u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x190294) {
            ctx->pc = 0x1902ECu;
            goto label_1902ec;
        }
    }
    ctx->pc = 0x19029Cu;
    // 0x19029c: 0x220202d
    ctx->pc = 0x19029cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902a0: 0x240282d
    ctx->pc = 0x1902a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902a4: 0xc05ca5a
    ctx->pc = 0x1902A4u;
    SET_GPR_U32(ctx, 31, 0x1902ACu);
    ctx->pc = 0x1902A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172968u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_IsHeader_0x172968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1902ACu; }
        else if (ctx->pc != 0x1902ACu) { ctx->pc = 0x1902ACu; }
    }
    if (ctx->pc != 0x1902ACu) { return; }
    ctx->pc = 0x1902ACu;
    // 0x1902ac: 0x1440000b
    ctx->pc = 0x1902ACu;
    {
        const bool branch_taken_0x1902ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1902B0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1902ac) {
            ctx->pc = 0x1902DCu;
            goto label_1902dc;
        }
    }
    ctx->pc = 0x1902B4u;
    // 0x1902b4: 0xc064dea
    ctx->pc = 0x1902B4u;
    SET_GPR_U32(ctx, 31, 0x1902BCu);
    ctx->pc = 0x1902B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1937A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFHDS_GetMuxVerNum_0x1937a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1902BCu; }
        else if (ctx->pc != 0x1902BCu) { ctx->pc = 0x1902BCu; }
    }
    if (ctx->pc != 0x1902BCu) { return; }
    ctx->pc = 0x1902BCu;
    // 0x1902bc: 0x2842006c
    ctx->pc = 0x1902bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 108));
    // 0x1902c0: 0x10400006
    ctx->pc = 0x1902C0u;
    {
        const bool branch_taken_0x1902c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1902C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1902c0) {
            ctx->pc = 0x1902DCu;
            goto label_1902dc;
        }
    }
    ctx->pc = 0x1902C8u;
    // 0x1902c8: 0x200202d
    ctx->pc = 0x1902c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902cc: 0x240302d
    ctx->pc = 0x1902ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902d0: 0xc0640c4
    ctx->pc = 0x1902D0u;
    SET_GPR_U32(ctx, 31, 0x1902D8u);
    ctx->pc = 0x1902D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_SearchAlign_0x190310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1902D8u; }
        else if (ctx->pc != 0x1902D8u) { ctx->pc = 0x1902D8u; }
    }
    if (ctx->pc != 0x1902D8u) { return; }
    ctx->pc = 0x1902D8u;
    // 0x1902d8: 0x512023
    ctx->pc = 0x1902d8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1902dc:
    // 0x1902dc: 0x3c020019
    ctx->pc = 0x1902dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
    // 0x1902e0: 0xae640000
    ctx->pc = 0x1902e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1902e4: 0x2442ff70
    ctx->pc = 0x1902e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967152));
    // 0x1902e8: 0xae82003c
    ctx->pc = 0x1902e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_1902ec:
    // 0x1902ec: 0xdfbf0060
    ctx->pc = 0x1902ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1902f0: 0xdfb40050
    ctx->pc = 0x1902f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1902f4: 0xdfb30040
    ctx->pc = 0x1902f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1902f8: 0xdfb20030
    ctx->pc = 0x1902f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1902fc: 0xdfb10020
    ctx->pc = 0x1902fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190300: 0xdfb00010
    ctx->pc = 0x190300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190304: 0x3e00008
    ctx->pc = 0x190304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190308u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1902DCu: goto label_1902dc;
            case 0x1902ECu: goto label_1902ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19030Cu;
}
