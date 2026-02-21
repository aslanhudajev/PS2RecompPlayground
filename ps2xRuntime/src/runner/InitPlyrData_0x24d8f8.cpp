#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitPlyrData
// Address: 0x24d8f8 - 0x24d9d0
void InitPlyrData_0x24d8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24d8f8u;

    // 0x24d8f8: 0x27bdff80
    ctx->pc = 0x24d8f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24d8fc: 0xffbf0070
    ctx->pc = 0x24d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24d900: 0xffb60060
    ctx->pc = 0x24d900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x24d904: 0xffb50050
    ctx->pc = 0x24d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24d908: 0xffb40040
    ctx->pc = 0x24d908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24d90c: 0xffb30030
    ctx->pc = 0x24d90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24d910: 0xffb20020
    ctx->pc = 0x24d910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24d914: 0xffb10010
    ctx->pc = 0x24d914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24d918: 0xffb00000
    ctx->pc = 0x24d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d91c: 0x902d
    ctx->pc = 0x24d91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d920: 0x882d
    ctx->pc = 0x24d920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d924: 0x3c020033
    ctx->pc = 0x24d924u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d928: 0x245048c8
    ctx->pc = 0x24d928u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 18632));
    // 0x24d92c: 0x111080
    ctx->pc = 0x24d92cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_24d930:
    // 0x24d930: 0x501021
    ctx->pc = 0x24d930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24d934: 0xac400000
    ctx->pc = 0x24d934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24d938: 0xc0935e6
    ctx->pc = 0x24D938u;
    SET_GPR_U32(ctx, 31, 0x24D940u);
    ctx->pc = 0x24D93Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24D798u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPdataFile_0x24d798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D940u; }
    }
    if (ctx->pc != 0x24D940u) { return; }
    ctx->pc = 0x24D940u;
    // 0x24d940: 0x242182a
    ctx->pc = 0x24d940u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x24d944: 0x43900b
    ctx->pc = 0x24d944u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
    // 0x24d948: 0x26310001
    ctx->pc = 0x24d948u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x24d94c: 0x2a220010
    ctx->pc = 0x24d94cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x24d950: 0x1440fff7
    ctx->pc = 0x24D950u;
    {
        const bool branch_taken_0x24d950 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24D954u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x24d950) {
            ctx->pc = 0x24D930u;
            goto label_24d930;
        }
    }
    ctx->pc = 0x24D958u;
    // 0x24d958: 0x882d
    ctx->pc = 0x24d958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d95c: 0x3c02003c
    ctx->pc = 0x24d95cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x24d960: 0x24561ee0
    ctx->pc = 0x24d960u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7904));
    // 0x24d964: 0x2415ffff
    ctx->pc = 0x24d964u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24d968: 0x3c020033
    ctx->pc = 0x24d968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d96c: 0x24544960
    ctx->pc = 0x24d96cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 18784));
    // 0x24d970: 0x3c020033
    ctx->pc = 0x24d970u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d974: 0x24534910
    ctx->pc = 0x24d974u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 18704));
label_24d978:
    // 0x24d978: 0x118080
    ctx->pc = 0x24d978u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
    // 0x24d97c: 0x2161021
    ctx->pc = 0x24d97cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x24d980: 0xac550000
    ctx->pc = 0x24d980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x24d984: 0xc0b4f52
    ctx->pc = 0x24D984u;
    SET_GPR_U32(ctx, 31, 0x24D98Cu);
    ctx->pc = 0x24D988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D98Cu; }
    }
    if (ctx->pc != 0x24D98Cu) { return; }
    ctx->pc = 0x24D98Cu;
    // 0x24d98c: 0x2141821
    ctx->pc = 0x24d98cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x24d990: 0xac620000
    ctx->pc = 0x24d990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24d994: 0x2138021
    ctx->pc = 0x24d994u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x24d998: 0x26310001
    ctx->pc = 0x24d998u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x24d99c: 0x2a220004
    ctx->pc = 0x24d99cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x24d9a0: 0x1440fff5
    ctx->pc = 0x24D9A0u;
    {
        const bool branch_taken_0x24d9a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24D9A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x24d9a0) {
            ctx->pc = 0x24D978u;
            goto label_24d978;
        }
    }
    ctx->pc = 0x24D9A8u;
    // 0x24d9a8: 0xdfbf0070
    ctx->pc = 0x24d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24d9ac: 0xdfb60060
    ctx->pc = 0x24d9acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24d9b0: 0xdfb50050
    ctx->pc = 0x24d9b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24d9b4: 0xdfb40040
    ctx->pc = 0x24d9b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d9b8: 0xdfb30030
    ctx->pc = 0x24d9b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d9bc: 0xdfb20020
    ctx->pc = 0x24d9bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d9c0: 0xdfb10010
    ctx->pc = 0x24d9c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d9c4: 0xdfb00000
    ctx->pc = 0x24d9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d9c8: 0x3e00008
    ctx->pc = 0x24D9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D9CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D930u: goto label_24d930;
            case 0x24D978u: goto label_24d978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24D9D0u;
}
