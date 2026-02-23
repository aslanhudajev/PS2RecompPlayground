#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_IsSfdHeader
// Address: 0x19fcc8 - 0x19fd9c
void SFH_IsSfdHeader_0x19fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_IsSfdHeader");


    ctx->pc = 0x19fcc8u;

    // 0x19fcc8: 0x27bdffa0
    ctx->pc = 0x19fcc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19fccc: 0xffb30040
    ctx->pc = 0x19fcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x19fcd0: 0xffb20030
    ctx->pc = 0x19fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19fcd4: 0x24130001
    ctx->pc = 0x19fcd4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fcd8: 0xffb10020
    ctx->pc = 0x19fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19fcdc: 0xa0902d
    ctx->pc = 0x19fcdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fce0: 0xffb00010
    ctx->pc = 0x19fce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19fce4: 0xffbf0050
    ctx->pc = 0x19fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19fce8: 0x80802d
    ctx->pc = 0x19fce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcec: 0xae400000
    ctx->pc = 0x19fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x19fcf0: 0x8e020004
    ctx->pc = 0x19fcf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19fcf4: 0xc067f14
    ctx->pc = 0x19FCF4u;
    SET_GPR_U32(ctx, 31, 0x19FCFCu);
    ctx->pc = 0x19FCF8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 32));
    ctx->pc = 0x19FC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        isFreeObj_0x19fc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCFCu; }
        else if (ctx->pc != 0x19FCFCu) { ctx->pc = 0x19FCFCu; }
    }
    if (ctx->pc != 0x19FCFCu) { return; }
    ctx->pc = 0x19FCFCu;
    // 0x19fcfc: 0x10530020
    ctx->pc = 0x19FCFCu;
    {
        const bool branch_taken_0x19fcfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x19FD00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fcfc) {
            ctx->pc = 0x19FD80u;
            goto label_19fd80;
        }
    }
    ctx->pc = 0x19FD04u;
    // 0x19fd04: 0x8e020008
    ctx->pc = 0x19fd04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19fd08: 0x2c420800
    ctx->pc = 0x19fd08u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2048));
    // 0x19fd0c: 0x14400008
    ctx->pc = 0x19FD0Cu;
    {
        const bool branch_taken_0x19fd0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19FD10u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x19fd0c) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FD14u;
    // 0x19fd14: 0x3c05002c
    ctx->pc = 0x19fd14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x19fd18: 0x220202d
    ctx->pc = 0x19fd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd1c: 0x24a5d748
    ctx->pc = 0x19fd1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956872));
    // 0x19fd20: 0xc050c6a
    ctx->pc = 0x19FD20u;
    SET_GPR_U32(ctx, 31, 0x19FD28u);
    ctx->pc = 0x19FD24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD28u; }
        else if (ctx->pc != 0x19FD28u) { ctx->pc = 0x19FD28u; }
    }
    if (ctx->pc != 0x19FD28u) { return; }
    ctx->pc = 0x19FD28u;
    // 0x19fd28: 0x10400004
    ctx->pc = 0x19FD28u;
    {
        const bool branch_taken_0x19fd28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FD2Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x19fd28) {
            ctx->pc = 0x19FD3Cu;
            goto label_19fd3c;
        }
    }
    ctx->pc = 0x19FD30u;
label_19fd30:
    // 0x19fd30: 0x102d
    ctx->pc = 0x19fd30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd34: 0x10000012
    ctx->pc = 0x19FD34u;
    {
        const bool branch_taken_0x19fd34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FD38u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x19fd34) {
            ctx->pc = 0x19FD80u;
            goto label_19fd80;
        }
    }
    ctx->pc = 0x19FD3Cu;
label_19fd3c:
    // 0x19fd3c: 0x24020002
    ctx->pc = 0x19fd3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fd40: 0x200202d
    ctx->pc = 0x19fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd44: 0xae020000
    ctx->pc = 0x19fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19fd48: 0x3a0282d
    ctx->pc = 0x19fd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd4c: 0xc068020
    ctx->pc = 0x19FD4Cu;
    SET_GPR_U32(ctx, 31, 0x19FD54u);
    ctx->pc = 0x19FD50u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x1A0080u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_AnlyHdrToolVer_0x1a0080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD54u; }
        else if (ctx->pc != 0x19FD54u) { ctx->pc = 0x19FD54u; }
    }
    if (ctx->pc != 0x19FD54u) { return; }
    ctx->pc = 0x19FD54u;
    // 0x19fd54: 0x14400003
    ctx->pc = 0x19FD54u;
    {
        const bool branch_taken_0x19fd54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19FD58u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x19fd54) {
            ctx->pc = 0x19FD64u;
            goto label_19fd64;
        }
    }
    ctx->pc = 0x19FD5Cu;
    // 0x19fd5c: 0x10000008
    ctx->pc = 0x19FD5Cu;
    {
        const bool branch_taken_0x19fd5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FD60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fd5c) {
            ctx->pc = 0x19FD80u;
            goto label_19fd80;
        }
    }
    ctx->pc = 0x19FD64u;
label_19fd64:
    // 0x19fd64: 0x24040064
    ctx->pc = 0x19fd64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 100));
    // 0x19fd68: 0x8fa50004
    ctx->pc = 0x19fd68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19fd6c: 0x24020001
    ctx->pc = 0x19fd6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fd70: 0x641818
    ctx->pc = 0x19fd70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19fd74: 0x651821
    ctx->pc = 0x19fd74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19fd78: 0xae03000c
    ctx->pc = 0x19fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x19fd7c: 0xae530000
    ctx->pc = 0x19fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_19fd80:
    // 0x19fd80: 0xdfbf0050
    ctx->pc = 0x19fd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19fd84: 0xdfb30040
    ctx->pc = 0x19fd84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fd88: 0xdfb20030
    ctx->pc = 0x19fd88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fd8c: 0xdfb10020
    ctx->pc = 0x19fd8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fd90: 0xdfb00010
    ctx->pc = 0x19fd90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fd94: 0x3e00008
    ctx->pc = 0x19FD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FD98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FD30u: goto label_19fd30;
            case 0x19FD3Cu: goto label_19fd3c;
            case 0x19FD64u: goto label_19fd64;
            case 0x19FD80u: goto label_19fd80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FD9Cu;
}
