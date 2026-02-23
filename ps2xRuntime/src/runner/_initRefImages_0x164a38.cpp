#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _initRefImages
// Address: 0x164a38 - 0x164b20
void _initRefImages_0x164a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_initRefImages");


    ctx->pc = 0x164a38u;

    // 0x164a38: 0x3c020023
    ctx->pc = 0x164a38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x164a3c: 0x3c0c0023
    ctx->pc = 0x164a3cu;
    SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
    // 0x164a40: 0x8c43a34c
    ctx->pc = 0x164a40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943564)));
    // 0x164a44: 0x27bdffb0
    ctx->pc = 0x164a44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x164a48: 0x8d82a350
    ctx->pc = 0x164a48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 4294943568)));
    // 0x164a4c: 0x3c0e0fff
    ctx->pc = 0x164a4cu;
    SET_GPR_U32(ctx, 14, ((uint32_t)4095 << 16));
    // 0x164a50: 0xffb00000
    ctx->pc = 0x164a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164a54: 0x35ceffff
    ctx->pc = 0x164a54u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 65535));
    // 0x164a58: 0x621818
    ctx->pc = 0x164a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x164a5c: 0x2410ffff
    ctx->pc = 0x164a5cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164a60: 0xffb20020
    ctx->pc = 0x164a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x164a64: 0x24120180
    ctx->pc = 0x164a64u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 384));
    // 0x164a68: 0x8fac0058
    ctx->pc = 0x164a68u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x164a6c: 0xffb10010
    ctx->pc = 0x164a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x164a70: 0x203802a
    ctx->pc = 0x164a70u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x164a74: 0x246201ff
    ctx->pc = 0x164a74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 511));
    // 0x164a78: 0x70100b
    ctx->pc = 0x164a78u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x164a7c: 0x18e8824
    ctx->pc = 0x164a7cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x164a80: 0x21243
    ctx->pc = 0x164a80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x164a84: 0xffb30030
    ctx->pc = 0x164a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x164a88: 0x521818
    ctx->pc = 0x164a88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x164a8c: 0x8fad0060
    ctx->pc = 0x164a8cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x164a90: 0x3c132000
    ctx->pc = 0x164a90u;
    SET_GPR_U32(ctx, 19, ((uint32_t)8192 << 16));
    // 0x164a94: 0xffb40040
    ctx->pc = 0x164a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x164a98: 0x8fb40068
    ctx->pc = 0x164a98u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x164a9c: 0x2338825
    ctx->pc = 0x164a9cu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x164aa0: 0x1ae7824
    ctx->pc = 0x164aa0u;
    SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x164aa4: 0xac910000
    ctx->pc = 0x164aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x164aa8: 0x6c6021
    ctx->pc = 0x164aa8u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x164aac: 0x1f37825
    ctx->pc = 0x164aacu;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x164ab0: 0x521818
    ctx->pc = 0x164ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x164ab4: 0x522018
    ctx->pc = 0x164ab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x164ab8: 0xacaf0000
    ctx->pc = 0x164ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x164abc: 0x18e6024
    ctx->pc = 0x164abcu;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x164ac0: 0x1936025
    ctx->pc = 0x164ac0u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 19)));
    // 0x164ac4: 0xdfb20020
    ctx->pc = 0x164ac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164ac8: 0xdfb00000
    ctx->pc = 0x164ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164acc: 0x6d6821
    ctx->pc = 0x164accu;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x164ad0: 0x941021
    ctx->pc = 0x164ad0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x164ad4: 0x28e1824
    ctx->pc = 0x164ad4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 14)));
    // 0x164ad8: 0x1ae6824
    ctx->pc = 0x164ad8u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x164adc: 0x731825
    ctx->pc = 0x164adcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x164ae0: 0x4e1024
    ctx->pc = 0x164ae0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x164ae4: 0xacc30000
    ctx->pc = 0x164ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x164ae8: 0x1b36825
    ctx->pc = 0x164ae8u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x164aec: 0xacf10000
    ctx->pc = 0x164aecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x164af0: 0x531025
    ctx->pc = 0x164af0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x164af4: 0xad0f0000
    ctx->pc = 0x164af4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
    // 0x164af8: 0xad230000
    ctx->pc = 0x164af8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x164afc: 0xad4c0000
    ctx->pc = 0x164afcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x164b00: 0x8fa30050
    ctx->pc = 0x164b00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164b04: 0xad6d0000
    ctx->pc = 0x164b04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x164b08: 0xdfb40040
    ctx->pc = 0x164b08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164b0c: 0xdfb30030
    ctx->pc = 0x164b0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164b10: 0xdfb10010
    ctx->pc = 0x164b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164b14: 0xac620000
    ctx->pc = 0x164b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x164b18: 0x3e00008
    ctx->pc = 0x164B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164B1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164B20u;
}
