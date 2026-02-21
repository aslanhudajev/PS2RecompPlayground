#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ProcessCritterList
// Address: 0x2991b8 - 0x299260
void ProcessCritterList_0x2991b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2991b8u;

    // 0x2991b8: 0x27bdffa0
    ctx->pc = 0x2991b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2991bc: 0xffbf0050
    ctx->pc = 0x2991bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2991c0: 0xffb40040
    ctx->pc = 0x2991c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2991c4: 0xffb30030
    ctx->pc = 0x2991c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2991c8: 0xffb20020
    ctx->pc = 0x2991c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2991cc: 0xffb10010
    ctx->pc = 0x2991ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2991d0: 0xffb00000
    ctx->pc = 0x2991d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2991d4: 0x3c030036
    ctx->pc = 0x2991d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2991d8: 0x9462d5f8
    ctx->pc = 0x2991d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294956536)));
    // 0x2991dc: 0x24420001
    ctx->pc = 0x2991dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2991e0: 0xc0a6ace
    ctx->pc = 0x2991E0u;
    SET_GPR_U32(ctx, 31, 0x2991E8u);
    ctx->pc = 0x2991E4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294956536), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x29AB38u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitPlayerData_0x29ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2991E8u; }
    }
    if (ctx->pc != 0x2991E8u) { return; }
    ctx->pc = 0x2991E8u;
    // 0x2991e8: 0x802d
    ctx->pc = 0x2991e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991ec: 0x3c020036
    ctx->pc = 0x2991ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2991f0: 0x8c42d4c0
    ctx->pc = 0x2991f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956224)));
    // 0x2991f4: 0x18400011
    ctx->pc = 0x2991F4u;
    {
        const bool branch_taken_0x2991f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2991F8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2991f4) {
            ctx->pc = 0x29923Cu;
            goto label_29923c;
        }
    }
    ctx->pc = 0x2991FCu;
    // 0x2991fc: 0x3c020035
    ctx->pc = 0x2991fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x299200: 0x24541dc0
    ctx->pc = 0x299200u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 7616));
    // 0x299204: 0x24130b70
    ctx->pc = 0x299204u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2928));
    // 0x299208: 0x3c120036
    ctx->pc = 0x299208u;
    SET_GPR_U32(ctx, 18, ((uint32_t)54 << 16));
    // 0x29920c: 0x2131018
    ctx->pc = 0x29920cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_299210:
    // 0x299210: 0x542021
    ctx->pc = 0x299210u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x299214: 0x8c820004
    ctx->pc = 0x299214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299218: 0x10400004
    ctx->pc = 0x299218u;
    {
        const bool branch_taken_0x299218 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29921Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x299218) {
            ctx->pc = 0x29922Cu;
            goto label_29922c;
        }
    }
    ctx->pc = 0x299220u;
    // 0x299220: 0xc0a6362
    ctx->pc = 0x299220u;
    SET_GPR_U32(ctx, 31, 0x299228u);
    ctx->pc = 0x298D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessCritter_0x298d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299228u; }
    }
    if (ctx->pc != 0x299228u) { return; }
    ctx->pc = 0x299228u;
    // 0x299228: 0x2228821
    ctx->pc = 0x299228u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29922c:
    // 0x29922c: 0x8e42d4c0
    ctx->pc = 0x29922cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294956224)));
    // 0x299230: 0x202102a
    ctx->pc = 0x299230u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x299234: 0x1440fff6
    ctx->pc = 0x299234u;
    {
        const bool branch_taken_0x299234 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x299238u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x299234) {
            ctx->pc = 0x299210u;
            goto label_299210;
        }
    }
    ctx->pc = 0x29923Cu;
label_29923c:
    // 0x29923c: 0x220102d
    ctx->pc = 0x29923cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299240: 0xdfbf0050
    ctx->pc = 0x299240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299244: 0xdfb40040
    ctx->pc = 0x299244u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299248: 0xdfb30030
    ctx->pc = 0x299248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29924c: 0xdfb20020
    ctx->pc = 0x29924cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299250: 0xdfb10010
    ctx->pc = 0x299250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299254: 0xdfb00000
    ctx->pc = 0x299254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299258: 0x3e00008
    ctx->pc = 0x299258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29925Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299210u: goto label_299210;
            case 0x29922Cu: goto label_29922c;
            case 0x29923Cu: goto label_29923c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299260u;
}
