#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecCreate
// Address: 0x2ddfb8 - 0x2de0b8
void videoDecCreate_0x2ddfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ddfb8u;

    // 0x2ddfb8: 0x27bdff90
    ctx->pc = 0x2ddfb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ddfbc: 0xffbf0060
    ctx->pc = 0x2ddfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ddfc0: 0xffb50050
    ctx->pc = 0x2ddfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ddfc4: 0xffb40040
    ctx->pc = 0x2ddfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ddfc8: 0xffb30030
    ctx->pc = 0x2ddfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ddfcc: 0xffb20020
    ctx->pc = 0x2ddfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ddfd0: 0xffb10010
    ctx->pc = 0x2ddfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ddfd4: 0xffb00000
    ctx->pc = 0x2ddfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddfd8: 0x80802d
    ctx->pc = 0x2ddfd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddfdc: 0xe0882d
    ctx->pc = 0x2ddfdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddfe0: 0x100902d
    ctx->pc = 0x2ddfe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddfe4: 0x120982d
    ctx->pc = 0x2ddfe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddfe8: 0x140a02d
    ctx->pc = 0x2ddfe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddfec: 0xc0bb712
    ctx->pc = 0x2DDFECu;
    SET_GPR_U32(ctx, 31, 0x2DDFF4u);
    ctx->pc = 0x2DDFF0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EDC48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegCreate_0x2edc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDFF4u; }
    }
    if (ctx->pc != 0x2DDFF4u) { return; }
    ctx->pc = 0x2DDFF4u;
    // 0x2ddff4: 0x200202d
    ctx->pc = 0x2ddff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddff8: 0x282d
    ctx->pc = 0x2ddff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddffc: 0x3c06002e
    ctx->pc = 0x2ddffcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x2de000: 0x24c6e5e8
    ctx->pc = 0x2de000u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294960616));
    // 0x2de004: 0xc0bb82a
    ctx->pc = 0x2DE004u;
    SET_GPR_U32(ctx, 31, 0x2DE00Cu);
    ctx->pc = 0x2DE008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE0A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x2ee0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE00Cu; }
    }
    if (ctx->pc != 0x2DE00Cu) { return; }
    ctx->pc = 0x2DE00Cu;
    // 0x2de00c: 0x200202d
    ctx->pc = 0x2de00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de010: 0x24050001
    ctx->pc = 0x2de010u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de014: 0x3c06002e
    ctx->pc = 0x2de014u;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x2de018: 0x24c6e610
    ctx->pc = 0x2de018u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294960656));
    // 0x2de01c: 0xc0bb82a
    ctx->pc = 0x2DE01Cu;
    SET_GPR_U32(ctx, 31, 0x2DE024u);
    ctx->pc = 0x2DE020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE0A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x2ee0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE024u; }
    }
    if (ctx->pc != 0x2DE024u) { return; }
    ctx->pc = 0x2DE024u;
    // 0x2de024: 0x200202d
    ctx->pc = 0x2de024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de028: 0x24050002
    ctx->pc = 0x2de028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2de02c: 0x3c06002e
    ctx->pc = 0x2de02cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x2de030: 0x24c6e640
    ctx->pc = 0x2de030u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294960704));
    // 0x2de034: 0xc0bb82a
    ctx->pc = 0x2DE034u;
    SET_GPR_U32(ctx, 31, 0x2DE03Cu);
    ctx->pc = 0x2DE038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE0A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x2ee0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE03Cu; }
    }
    if (ctx->pc != 0x2DE03Cu) { return; }
    ctx->pc = 0x2DE03Cu;
    // 0x2de03c: 0x200202d
    ctx->pc = 0x2de03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de040: 0x24050003
    ctx->pc = 0x2de040u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2de044: 0x3c06002e
    ctx->pc = 0x2de044u;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x2de048: 0x24c6e668
    ctx->pc = 0x2de048u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294960744));
    // 0x2de04c: 0xc0bb82a
    ctx->pc = 0x2DE04Cu;
    SET_GPR_U32(ctx, 31, 0x2DE054u);
    ctx->pc = 0x2DE050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE0A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x2ee0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE054u; }
    }
    if (ctx->pc != 0x2DE054u) { return; }
    ctx->pc = 0x2DE054u;
    // 0x2de054: 0x200202d
    ctx->pc = 0x2de054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de058: 0x24050005
    ctx->pc = 0x2de058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2de05c: 0x3c06002e
    ctx->pc = 0x2de05cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x2de060: 0x24c6e690
    ctx->pc = 0x2de060u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294960784));
    // 0x2de064: 0xc0bb82a
    ctx->pc = 0x2DE064u;
    SET_GPR_U32(ctx, 31, 0x2DE06Cu);
    ctx->pc = 0x2DE068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE0A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x2ee0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE06Cu; }
    }
    if (ctx->pc != 0x2DE06Cu) { return; }
    ctx->pc = 0x2DE06Cu;
    // 0x2de06c: 0xc0b783c
    ctx->pc = 0x2DE06Cu;
    SET_GPR_U32(ctx, 31, 0x2DE074u);
    ctx->pc = 0x2DE070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecReset_0x2de0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE074u; }
    }
    if (ctx->pc != 0x2DE074u) { return; }
    ctx->pc = 0x2DE074u;
    // 0x2de074: 0x26040048
    ctx->pc = 0x2de074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 72));
    // 0x2de078: 0x220282d
    ctx->pc = 0x2de078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de07c: 0x240302d
    ctx->pc = 0x2de07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de080: 0x260382d
    ctx->pc = 0x2de080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de084: 0x280402d
    ctx->pc = 0x2de084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de088: 0xc0b7ca6
    ctx->pc = 0x2DE088u;
    SET_GPR_U32(ctx, 31, 0x2DE090u);
    ctx->pc = 0x2DE08Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF298u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufCreate_0x2df298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE090u; }
    }
    if (ctx->pc != 0x2DE090u) { return; }
    ctx->pc = 0x2DE090u;
    // 0x2de090: 0x24020001
    ctx->pc = 0x2de090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de094: 0xdfbf0060
    ctx->pc = 0x2de094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de098: 0xdfb50050
    ctx->pc = 0x2de098u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de09c: 0xdfb40040
    ctx->pc = 0x2de09cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de0a0: 0xdfb30030
    ctx->pc = 0x2de0a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de0a4: 0xdfb20020
    ctx->pc = 0x2de0a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de0a8: 0xdfb10010
    ctx->pc = 0x2de0a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de0ac: 0xdfb00000
    ctx->pc = 0x2de0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de0b0: 0x3e00008
    ctx->pc = 0x2DE0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE0B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE0B8u;
}
