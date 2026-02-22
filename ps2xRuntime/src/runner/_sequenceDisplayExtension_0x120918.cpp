#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sequenceDisplayExtension
// Address: 0x120918 - 0x1209b8
void _sequenceDisplayExtension_0x120918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120918u;

    // 0x120918: 0x27bdffd0
    ctx->pc = 0x120918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12091c: 0x24040003
    ctx->pc = 0x12091cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x120920: 0xffb10010
    ctx->pc = 0x120920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x120924: 0xffb00000
    ctx->pc = 0x120924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120928: 0x3c110017
    ctx->pc = 0x120928u;
    SET_GPR_S32(ctx, 17, ((uint32_t)23 << 16));
    // 0x12092c: 0xffbf0020
    ctx->pc = 0x12092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x120930: 0xc048fdc
    ctx->pc = 0x120930u;
    SET_GPR_U32(ctx, 31, 0x120938u);
    ctx->pc = 0x120934u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120938u; }
    }
    if (ctx->pc != 0x120938u) { return; }
    ctx->pc = 0x120938u;
    // 0x120938: 0xae02195c
    ctx->pc = 0x120938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6492), GPR_U32(ctx, 2));
    // 0x12093c: 0xc048fdc
    ctx->pc = 0x12093Cu;
    SET_GPR_U32(ctx, 31, 0x120944u);
    ctx->pc = 0x120940u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120944u; }
    }
    if (ctx->pc != 0x120944u) { return; }
    ctx->pc = 0x120944u;
    // 0x120944: 0x1040000d
    ctx->pc = 0x120944u;
    {
        const bool branch_taken_0x120944 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x120948u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 6496), GPR_U32(ctx, 2));
        if (branch_taken_0x120944) {
            ctx->pc = 0x12097Cu;
            goto label_12097c;
        }
    }
    ctx->pc = 0x12094Cu;
    // 0x12094c: 0x24040008
    ctx->pc = 0x12094cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x120950: 0xc048fdc
    ctx->pc = 0x120950u;
    SET_GPR_U32(ctx, 31, 0x120958u);
    ctx->pc = 0x120954u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120958u; }
    }
    if (ctx->pc != 0x120958u) { return; }
    ctx->pc = 0x120958u;
    // 0x120958: 0x3c110017
    ctx->pc = 0x120958u;
    SET_GPR_S32(ctx, 17, ((uint32_t)23 << 16));
    // 0x12095c: 0xae021964
    ctx->pc = 0x12095cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6500), GPR_U32(ctx, 2));
    // 0x120960: 0xc048fdc
    ctx->pc = 0x120960u;
    SET_GPR_U32(ctx, 31, 0x120968u);
    ctx->pc = 0x120964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120968u; }
    }
    if (ctx->pc != 0x120968u) { return; }
    ctx->pc = 0x120968u;
    // 0x120968: 0x3c100017
    ctx->pc = 0x120968u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    // 0x12096c: 0xae221968
    ctx->pc = 0x12096cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6504), GPR_U32(ctx, 2));
    // 0x120970: 0xc048fdc
    ctx->pc = 0x120970u;
    SET_GPR_U32(ctx, 31, 0x120978u);
    ctx->pc = 0x120974u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120978u; }
    }
    if (ctx->pc != 0x120978u) { return; }
    ctx->pc = 0x120978u;
    // 0x120978: 0xae02196c
    ctx->pc = 0x120978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6508), GPR_U32(ctx, 2));
label_12097c:
    // 0x12097c: 0x2404000e
    ctx->pc = 0x12097cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x120980: 0xc048fdc
    ctx->pc = 0x120980u;
    SET_GPR_U32(ctx, 31, 0x120988u);
    ctx->pc = 0x120984u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120988u; }
    }
    if (ctx->pc != 0x120988u) { return; }
    ctx->pc = 0x120988u;
    // 0x120988: 0x3c110017
    ctx->pc = 0x120988u;
    SET_GPR_S32(ctx, 17, ((uint32_t)23 << 16));
    // 0x12098c: 0xae021970
    ctx->pc = 0x12098cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6512), GPR_U32(ctx, 2));
    // 0x120990: 0xc048fdc
    ctx->pc = 0x120990u;
    SET_GPR_U32(ctx, 31, 0x120998u);
    ctx->pc = 0x120994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120998u; }
    }
    if (ctx->pc != 0x120998u) { return; }
    ctx->pc = 0x120998u;
    // 0x120998: 0xc048fdc
    ctx->pc = 0x120998u;
    SET_GPR_U32(ctx, 31, 0x1209A0u);
    ctx->pc = 0x12099Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1209A0u; }
    }
    if (ctx->pc != 0x1209A0u) { return; }
    ctx->pc = 0x1209A0u;
    // 0x1209a0: 0xae221974
    ctx->pc = 0x1209a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6516), GPR_U32(ctx, 2));
    // 0x1209a4: 0xdfbf0020
    ctx->pc = 0x1209a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1209a8: 0xdfb10010
    ctx->pc = 0x1209a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1209ac: 0xdfb00000
    ctx->pc = 0x1209acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209b0: 0x3e00008
    ctx->pc = 0x1209B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1209B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12097Cu: goto label_12097c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1209B8u;
}
