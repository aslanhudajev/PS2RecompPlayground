#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnyPlayerHasAllCrystals
// Address: 0x276ec8 - 0x276fac
void AnyPlayerHasAllCrystals_0x276ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276ec8u;

    // 0x276ec8: 0x27bdff70
    ctx->pc = 0x276ec8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x276ecc: 0xffbf0080
    ctx->pc = 0x276eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x276ed0: 0xffb70070
    ctx->pc = 0x276ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x276ed4: 0xffb60060
    ctx->pc = 0x276ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x276ed8: 0xffb50050
    ctx->pc = 0x276ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x276edc: 0xffb40040
    ctx->pc = 0x276edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x276ee0: 0xffb30030
    ctx->pc = 0x276ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x276ee4: 0xffb20020
    ctx->pc = 0x276ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x276ee8: 0xffb10010
    ctx->pc = 0x276ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x276eec: 0xffb00000
    ctx->pc = 0x276eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276ef0: 0x80982d
    ctx->pc = 0x276ef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ef4: 0x902d
    ctx->pc = 0x276ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ef8: 0x882d
    ctx->pc = 0x276ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276efc: 0x24172b00
    ctx->pc = 0x276efcu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x276f00: 0x3c020032
    ctx->pc = 0x276f00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x276f04: 0x24561bc0
    ctx->pc = 0x276f04u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276f08: 0x13a040
    ctx->pc = 0x276f08u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 19), 1));
    // 0x276f0c: 0x241500b4
    ctx->pc = 0x276f0cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 180));
    // 0x276f10: 0x2371018
    ctx->pc = 0x276f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276f14: 0x0
    ctx->pc = 0x276f14u;
    // NOP
label_276f18:
    // 0x276f18: 0x568021
    ctx->pc = 0x276f18u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x276f1c: 0x8e0200fc
    ctx->pc = 0x276f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x276f20: 0x1040000c
    ctx->pc = 0x276F20u;
    {
        const bool branch_taken_0x276f20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276F24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x276f20) {
            ctx->pc = 0x276F54u;
            goto label_276f54;
        }
    }
    ctx->pc = 0x276F28u;
    // 0x276f28: 0xc09db92
    ctx->pc = 0x276F28u;
    SET_GPR_U32(ctx, 31, 0x276F30u);
    ctx->pc = 0x276F2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x276E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasAllCrystals_0x276e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276F30u; }
    }
    if (ctx->pc != 0x276F30u) { return; }
    ctx->pc = 0x276F30u;
    // 0x276f30: 0x14400013
    ctx->pc = 0x276F30u;
    {
        const bool branch_taken_0x276f30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276F34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x276f30) {
            ctx->pc = 0x276F80u;
            goto label_276f80;
        }
    }
    ctx->pc = 0x276F38u;
    // 0x276f38: 0x8e02000c
    ctx->pc = 0x276f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x276f3c: 0x551818
    ctx->pc = 0x276f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276f40: 0x741021
    ctx->pc = 0x276f40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x276f44: 0x2021021
    ctx->pc = 0x276f44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x276f48: 0x84430d0a
    ctx->pc = 0x276f48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3338)));
    // 0x276f4c: 0x72102a
    ctx->pc = 0x276f4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 18)));
    // 0x276f50: 0x62900a
    ctx->pc = 0x276f50u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_276f54:
    // 0x276f54: 0x26310001
    ctx->pc = 0x276f54u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x276f58: 0x2a220004
    ctx->pc = 0x276f58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x276f5c: 0x1440ffee
    ctx->pc = 0x276F5Cu;
    {
        const bool branch_taken_0x276f5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276F60u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276f5c) {
            ctx->pc = 0x276F18u;
            goto label_276f18;
        }
    }
    ctx->pc = 0x276F64u;
    // 0x276f64: 0x3c020034
    ctx->pc = 0x276f64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x276f68: 0x2442fa90
    ctx->pc = 0x276f68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x276f6c: 0x131880
    ctx->pc = 0x276f6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x276f70: 0x621821
    ctx->pc = 0x276f70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276f74: 0x8c620000
    ctx->pc = 0x276f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276f78: 0x242102a
    ctx->pc = 0x276f78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x276f7c: 0x38420001
    ctx->pc = 0x276f7cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_276f80:
    // 0x276f80: 0xdfbf0080
    ctx->pc = 0x276f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x276f84: 0xdfb70070
    ctx->pc = 0x276f84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x276f88: 0xdfb60060
    ctx->pc = 0x276f88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276f8c: 0xdfb50050
    ctx->pc = 0x276f8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276f90: 0xdfb40040
    ctx->pc = 0x276f90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276f94: 0xdfb30030
    ctx->pc = 0x276f94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276f98: 0xdfb20020
    ctx->pc = 0x276f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276f9c: 0xdfb10010
    ctx->pc = 0x276f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276fa0: 0xdfb00000
    ctx->pc = 0x276fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276fa4: 0x3e00008
    ctx->pc = 0x276FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276F18u: goto label_276f18;
            case 0x276F54u: goto label_276f54;
            case 0x276F80u: goto label_276f80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276FACu;
}
