#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadTowerAndSelect
// Address: 0x226750 - 0x226854
void LoadTowerAndSelect_0x226750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x226750u;

    // 0x226750: 0x27bdffc0
    ctx->pc = 0x226750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x226754: 0xffbf0030
    ctx->pc = 0x226754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x226758: 0xffb20020
    ctx->pc = 0x226758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22675c: 0xffb10010
    ctx->pc = 0x22675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x226760: 0xffb00000
    ctx->pc = 0x226760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226764: 0x3c02003a
    ctx->pc = 0x226764u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x226768: 0x8c4222f8
    ctx->pc = 0x226768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x22676c: 0x24500384
    ctx->pc = 0x22676cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 900));
    // 0x226770: 0x3c020035
    ctx->pc = 0x226770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x226774: 0x8c42a430
    ctx->pc = 0x226774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943792)));
    // 0x226778: 0x4410014
    ctx->pc = 0x226778u;
    {
        const bool branch_taken_0x226778 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22677Cu;
        SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
        if (branch_taken_0x226778) {
            ctx->pc = 0x2267CCu;
            goto label_2267cc;
        }
    }
    ctx->pc = 0x226780u;
    // 0x226780: 0x2404ffff
    ctx->pc = 0x226780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226784: 0x282d
    ctx->pc = 0x226784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226788: 0xc0898c2
    ctx->pc = 0x226788u;
    SET_GPR_U32(ctx, 31, 0x226790u);
    ctx->pc = 0x22678Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x226308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetModels_0x226308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226790u; }
    }
    if (ctx->pc != 0x226790u) { return; }
    ctx->pc = 0x226790u;
    // 0x226790: 0xc0a178c
    ctx->pc = 0x226790u;
    SET_GPR_U32(ctx, 31, 0x226798u);
    ctx->pc = 0x226794u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    ctx->pc = 0x285E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        SelectLoadStart_0x285e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226798u; }
    }
    if (ctx->pc != 0x226798u) { return; }
    ctx->pc = 0x226798u;
    // 0x226798: 0x10000007
    ctx->pc = 0x226798u;
    {
        const bool branch_taken_0x226798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22679Cu;
        SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
        if (branch_taken_0x226798) {
            ctx->pc = 0x2267B8u;
            goto label_2267b8;
        }
    }
    ctx->pc = 0x2267A0u;
label_2267a0:
    // 0x2267a0: 0x8e4222f8
    ctx->pc = 0x2267a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8952)));
    // 0x2267a4: 0x202102b
    ctx->pc = 0x2267a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2267a8: 0x10400003
    ctx->pc = 0x2267A8u;
    {
        const bool branch_taken_0x2267a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2267ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 27752));
        if (branch_taken_0x2267a8) {
            ctx->pc = 0x2267B8u;
            goto label_2267b8;
        }
    }
    ctx->pc = 0x2267B0u;
    // 0x2267b0: 0xc0b49a6
    ctx->pc = 0x2267B0u;
    SET_GPR_U32(ctx, 31, 0x2267B8u);
    ctx->pc = 0x2267B4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2267B8u; }
    }
    if (ctx->pc != 0x2267B8u) { return; }
    ctx->pc = 0x2267B8u;
label_2267b8:
    // 0x2267b8: 0xc0a179e
    ctx->pc = 0x2267B8u;
    SET_GPR_U32(ctx, 31, 0x2267C0u);
    ctx->pc = 0x285E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SelectLoadDone_0x285e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2267C0u; }
    }
    if (ctx->pc != 0x2267C0u) { return; }
    ctx->pc = 0x2267C0u;
    // 0x2267c0: 0x1040fff7
    ctx->pc = 0x2267C0u;
    {
        const bool branch_taken_0x2267c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2267c0) {
            ctx->pc = 0x2267A0u;
            goto label_2267a0;
        }
    }
    ctx->pc = 0x2267C8u;
    // 0x2267c8: 0x3c110032
    ctx->pc = 0x2267c8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
label_2267cc:
    // 0x2267cc: 0x8e22071c
    ctx->pc = 0x2267ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1820)));
    // 0x2267d0: 0x4410012
    ctx->pc = 0x2267D0u;
    {
        const bool branch_taken_0x2267d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2267D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2267d0) {
            ctx->pc = 0x22681Cu;
            goto label_22681c;
        }
    }
    ctx->pc = 0x2267D8u;
    // 0x2267d8: 0x3c100034
    ctx->pc = 0x2267d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x2267dc: 0x8e04e7d4
    ctx->pc = 0x2267dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294961108)));
    // 0x2267e0: 0x24050001
    ctx->pc = 0x2267e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2267e4: 0xc0898c2
    ctx->pc = 0x2267E4u;
    SET_GPR_U32(ctx, 31, 0x2267ECu);
    ctx->pc = 0x2267E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x226308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetModels_0x226308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2267ECu; }
    }
    if (ctx->pc != 0x2267ECu) { return; }
    ctx->pc = 0x2267ECu;
    // 0x2267ec: 0x3c04003a
    ctx->pc = 0x2267ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2267f0: 0x24846c88
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27784));
    // 0x2267f4: 0xc0803c4
    ctx->pc = 0x2267F4u;
    SET_GPR_U32(ctx, 31, 0x2267FCu);
    ctx->pc = 0x2267F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x200F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontInitSpecial_0x200f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2267FCu; }
    }
    if (ctx->pc != 0x2267FCu) { return; }
    ctx->pc = 0x2267FCu;
    // 0x2267fc: 0xc0a27b2
    ctx->pc = 0x2267FCu;
    SET_GPR_U32(ctx, 31, 0x226804u);
    ctx->pc = 0x289EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShopLoadData_0x289ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226804u; }
    }
    if (ctx->pc != 0x226804u) { return; }
    ctx->pc = 0x226804u;
    // 0x226804: 0xc093e06
    ctx->pc = 0x226804u;
    SET_GPR_U32(ctx, 31, 0x22680Cu);
    ctx->pc = 0x24F818u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadItems_0x24f818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22680Cu; }
    }
    if (ctx->pc != 0x22680Cu) { return; }
    ctx->pc = 0x22680Cu;
    // 0x22680c: 0xc098f70
    ctx->pc = 0x22680Cu;
    SET_GPR_U32(ctx, 31, 0x226814u);
    ctx->pc = 0x226810u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294961108)));
    ctx->pc = 0x263DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldStart_0x263dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226814u; }
    }
    if (ctx->pc != 0x226814u) { return; }
    ctx->pc = 0x226814u;
    // 0x226814: 0x10000009
    ctx->pc = 0x226814u;
    {
        const bool branch_taken_0x226814 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226818u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 1820), GPR_U32(ctx, 2));
        if (branch_taken_0x226814) {
            ctx->pc = 0x22683Cu;
            goto label_22683c;
        }
    }
    ctx->pc = 0x22681Cu;
label_22681c:
    // 0x22681c: 0x24050001
    ctx->pc = 0x22681cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226820: 0x2406ffff
    ctx->pc = 0x226820u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226824: 0xdfbf0030
    ctx->pc = 0x226824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226828: 0xdfb20020
    ctx->pc = 0x226828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22682c: 0xdfb10010
    ctx->pc = 0x22682cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226830: 0xdfb00000
    ctx->pc = 0x226830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226834: 0x80898c2
    ctx->pc = 0x226834u;
    ctx->pc = 0x226838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x226308u;
    ResetModels_0x226308(rdram, ctx, runtime); return;
    ctx->pc = 0x22683Cu;
label_22683c:
    // 0x22683c: 0xdfbf0030
    ctx->pc = 0x22683cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226840: 0xdfb20020
    ctx->pc = 0x226840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226844: 0xdfb10010
    ctx->pc = 0x226844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226848: 0xdfb00000
    ctx->pc = 0x226848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22684c: 0x3e00008
    ctx->pc = 0x22684Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226850u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2267A0u: goto label_2267a0;
            case 0x2267B8u: goto label_2267b8;
            case 0x2267CCu: goto label_2267cc;
            case 0x22681Cu: goto label_22681c;
            case 0x22683Cu: goto label_22683c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226854u;
}
