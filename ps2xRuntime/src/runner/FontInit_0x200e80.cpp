#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FontInit
// Address: 0x200e80 - 0x200f0c
void FontInit_0x200e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x200e80u;

    // 0x200e80: 0x27bdffc0
    ctx->pc = 0x200e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x200e84: 0xffbf0030
    ctx->pc = 0x200e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x200e88: 0xffb20020
    ctx->pc = 0x200e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x200e8c: 0xffb10010
    ctx->pc = 0x200e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x200e90: 0xc0b122c
    ctx->pc = 0x200E90u;
    SET_GPR_U32(ctx, 31, 0x200E98u);
    ctx->pc = 0x200E94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x2C48B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitFonts_0x2c48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200E98u; }
    }
    if (ctx->pc != 0x200E98u) { return; }
    ctx->pc = 0x200E98u;
    // 0x200e98: 0xc080620
    ctx->pc = 0x200E98u;
    SET_GPR_U32(ctx, 31, 0x200EA0u);
    ctx->pc = 0x200E9Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201880u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringInit_0x201880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200EA0u; }
    }
    if (ctx->pc != 0x200EA0u) { return; }
    ctx->pc = 0x200EA0u;
    // 0x200ea0: 0x3c02003c
    ctx->pc = 0x200ea0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x200ea4: 0xac40b238
    ctx->pc = 0x200ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947384), GPR_U32(ctx, 0));
    // 0x200ea8: 0x3c020031
    ctx->pc = 0x200ea8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x200eac: 0x2452f1c8
    ctx->pc = 0x200eacu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294963656));
    // 0x200eb0: 0x3c020031
    ctx->pc = 0x200eb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x200eb4: 0x2451f200
    ctx->pc = 0x200eb4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294963712));
    // 0x200eb8: 0x101080
    ctx->pc = 0x200eb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x200ebc: 0x0
    ctx->pc = 0x200ebcu;
    // NOP
label_200ec0:
    // 0x200ec0: 0x521821
    ctx->pc = 0x200ec0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x200ec4: 0x511021
    ctx->pc = 0x200ec4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x200ec8: 0x200202d
    ctx->pc = 0x200ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ecc: 0x8c650000
    ctx->pc = 0x200eccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200ed0: 0xc080368
    ctx->pc = 0x200ED0u;
    SET_GPR_U32(ctx, 31, 0x200ED8u);
    ctx->pc = 0x200ED4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x200DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        font_init_desc_0x200da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200ED8u; }
    }
    if (ctx->pc != 0x200ED8u) { return; }
    ctx->pc = 0x200ED8u;
    // 0x200ed8: 0x26100001
    ctx->pc = 0x200ed8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x200edc: 0x2e02000d
    ctx->pc = 0x200edcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 13));
    // 0x200ee0: 0x1440fff7
    ctx->pc = 0x200EE0u;
    {
        const bool branch_taken_0x200ee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x200EE4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x200ee0) {
            ctx->pc = 0x200EC0u;
            goto label_200ec0;
        }
    }
    ctx->pc = 0x200EE8u;
    // 0x200ee8: 0x3c03003a
    ctx->pc = 0x200ee8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x200eec: 0x24020001
    ctx->pc = 0x200eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x200ef0: 0xac621be0
    ctx->pc = 0x200ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7136), GPR_U32(ctx, 2));
    // 0x200ef4: 0xdfbf0030
    ctx->pc = 0x200ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200ef8: 0xdfb20020
    ctx->pc = 0x200ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200efc: 0xdfb10010
    ctx->pc = 0x200efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200f00: 0xdfb00000
    ctx->pc = 0x200f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200f04: 0x3e00008
    ctx->pc = 0x200F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200F08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200EC0u: goto label_200ec0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200F0Cu;
}
