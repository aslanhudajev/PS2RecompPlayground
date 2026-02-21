#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetEnemyDir
// Address: 0x238190 - 0x2382f0
void GetEnemyDir_0x238190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x238190u;

    // 0x238190: 0x27bdffc0
    ctx->pc = 0x238190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x238194: 0xffbf0030
    ctx->pc = 0x238194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x238198: 0xffb20020
    ctx->pc = 0x238198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23819c: 0xffb10010
    ctx->pc = 0x23819cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2381a0: 0xffb00000
    ctx->pc = 0x2381a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2381a4: 0x80902d
    ctx->pc = 0x2381a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381a8: 0xa0882d
    ctx->pc = 0x2381a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381ac: 0x2402001d
    ctx->pc = 0x2381acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x2381b0: 0x12220004
    ctx->pc = 0x2381B0u;
    {
        const bool branch_taken_0x2381b0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x2381B4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2381b0) {
            ctx->pc = 0x2381C4u;
            goto label_2381c4;
        }
    }
    ctx->pc = 0x2381B8u;
    // 0x2381b8: 0x24020021
    ctx->pc = 0x2381b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x2381bc: 0x16220011
    ctx->pc = 0x2381BCu;
    {
        const bool branch_taken_0x2381bc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2381C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2381bc) {
            ctx->pc = 0x238204u;
            goto label_238204;
        }
    }
    ctx->pc = 0x2381C4u;
label_2381c4:
    // 0x2381c4: 0xc08dbf4
    ctx->pc = 0x2381C4u;
    SET_GPR_U32(ctx, 31, 0x2381CCu);
    ctx->pc = 0x2381C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyTypeDesc_0x236fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2381CCu; }
    }
    if (ctx->pc != 0x2381CCu) { return; }
    ctx->pc = 0x2381CCu;
    // 0x2381cc: 0x40802d
    ctx->pc = 0x2381ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381d0: 0xc098980
    ctx->pc = 0x2381D0u;
    SET_GPR_U32(ctx, 31, 0x2381D8u);
    ctx->pc = 0x2381D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x262600u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelEnemyDesc_0x262600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2381D8u; }
    }
    if (ctx->pc != 0x2381D8u) { return; }
    ctx->pc = 0x2381D8u;
    // 0x2381d8: 0x240202d
    ctx->pc = 0x2381d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381dc: 0x3c05003a
    ctx->pc = 0x2381dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2381e0: 0x24a57d20
    ctx->pc = 0x2381e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32032));
    // 0x2381e4: 0x200302d
    ctx->pc = 0x2381e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381e8: 0x40382d
    ctx->pc = 0x2381e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381ec: 0xdfbf0030
    ctx->pc = 0x2381ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2381f0: 0xdfb20020
    ctx->pc = 0x2381f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2381f4: 0xdfb10010
    ctx->pc = 0x2381f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2381f8: 0xdfb00000
    ctx->pc = 0x2381f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2381fc: 0x80b6252
    ctx->pc = 0x2381FCu;
    ctx->pc = 0x238200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D8948u;
    sprintf_0x2d8948(rdram, ctx, runtime); return;
    ctx->pc = 0x238204u;
label_238204:
    // 0x238204: 0x16220011
    ctx->pc = 0x238204u;
    {
        const bool branch_taken_0x238204 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x238208u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x238204) {
            ctx->pc = 0x23824Cu;
            goto label_23824c;
        }
    }
    ctx->pc = 0x23820Cu;
    // 0x23820c: 0xc08dbf4
    ctx->pc = 0x23820Cu;
    SET_GPR_U32(ctx, 31, 0x238214u);
    ctx->pc = 0x238210u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x236FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyTypeDesc_0x236fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238214u; }
    }
    if (ctx->pc != 0x238214u) { return; }
    ctx->pc = 0x238214u;
    // 0x238214: 0x40802d
    ctx->pc = 0x238214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238218: 0xc098980
    ctx->pc = 0x238218u;
    SET_GPR_U32(ctx, 31, 0x238220u);
    ctx->pc = 0x23821Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x262600u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelEnemyDesc_0x262600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238220u; }
    }
    if (ctx->pc != 0x238220u) { return; }
    ctx->pc = 0x238220u;
    // 0x238220: 0x240202d
    ctx->pc = 0x238220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238224: 0x3c05003a
    ctx->pc = 0x238224u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x238228: 0x24a57d30
    ctx->pc = 0x238228u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32048));
    // 0x23822c: 0x200302d
    ctx->pc = 0x23822cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238230: 0x40382d
    ctx->pc = 0x238230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238234: 0xdfbf0030
    ctx->pc = 0x238234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238238: 0xdfb20020
    ctx->pc = 0x238238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23823c: 0xdfb10010
    ctx->pc = 0x23823cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238240: 0xdfb00000
    ctx->pc = 0x238240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238244: 0x80b6252
    ctx->pc = 0x238244u;
    ctx->pc = 0x238248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D8948u;
    sprintf_0x2d8948(rdram, ctx, runtime); return;
    ctx->pc = 0x23824Cu;
label_23824c:
    // 0x23824c: 0x1602000d
    ctx->pc = 0x23824Cu;
    {
        const bool branch_taken_0x23824c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x238250u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 11));
        if (branch_taken_0x23824c) {
            ctx->pc = 0x238284u;
            goto label_238284;
        }
    }
    ctx->pc = 0x238254u;
    // 0x238254: 0xc08dbf4
    ctx->pc = 0x238254u;
    SET_GPR_U32(ctx, 31, 0x23825Cu);
    ctx->pc = 0x238258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyTypeDesc_0x236fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23825Cu; }
    }
    if (ctx->pc != 0x23825Cu) { return; }
    ctx->pc = 0x23825Cu;
    // 0x23825c: 0x240202d
    ctx->pc = 0x23825cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238260: 0x3c05003a
    ctx->pc = 0x238260u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x238264: 0x24a57d40
    ctx->pc = 0x238264u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32064));
    // 0x238268: 0x40302d
    ctx->pc = 0x238268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23826c: 0xdfbf0030
    ctx->pc = 0x23826cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238270: 0xdfb20020
    ctx->pc = 0x238270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238274: 0xdfb10010
    ctx->pc = 0x238274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238278: 0xdfb00000
    ctx->pc = 0x238278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23827c: 0x80b6252
    ctx->pc = 0x23827Cu;
    ctx->pc = 0x238280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D8948u;
    sprintf_0x2d8948(rdram, ctx, runtime); return;
    ctx->pc = 0x238284u;
label_238284:
    // 0x238284: 0x1440000e
    ctx->pc = 0x238284u;
    {
        const bool branch_taken_0x238284 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x238284) {
            ctx->pc = 0x2382C0u;
            goto label_2382c0;
        }
    }
    ctx->pc = 0x23828Cu;
    // 0x23828c: 0xc08dbf4
    ctx->pc = 0x23828Cu;
    SET_GPR_U32(ctx, 31, 0x238294u);
    ctx->pc = 0x238290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyTypeDesc_0x236fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238294u; }
    }
    if (ctx->pc != 0x238294u) { return; }
    ctx->pc = 0x238294u;
    // 0x238294: 0x240202d
    ctx->pc = 0x238294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238298: 0x3c05003a
    ctx->pc = 0x238298u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x23829c: 0x24a57d50
    ctx->pc = 0x23829cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32080));
    // 0x2382a0: 0x40302d
    ctx->pc = 0x2382a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2382a4: 0x2607fff6
    ctx->pc = 0x2382a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 4294967286));
    // 0x2382a8: 0xdfbf0030
    ctx->pc = 0x2382a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2382ac: 0xdfb20020
    ctx->pc = 0x2382acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2382b0: 0xdfb10010
    ctx->pc = 0x2382b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2382b4: 0xdfb00000
    ctx->pc = 0x2382b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2382b8: 0x80b6252
    ctx->pc = 0x2382B8u;
    ctx->pc = 0x2382BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D8948u;
    sprintf_0x2d8948(rdram, ctx, runtime); return;
    ctx->pc = 0x2382C0u;
label_2382c0:
    // 0x2382c0: 0xc08dbf4
    ctx->pc = 0x2382C0u;
    SET_GPR_U32(ctx, 31, 0x2382C8u);
    ctx->pc = 0x2382C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyTypeDesc_0x236fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2382C8u; }
    }
    if (ctx->pc != 0x2382C8u) { return; }
    ctx->pc = 0x2382C8u;
    // 0x2382c8: 0x240202d
    ctx->pc = 0x2382c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2382cc: 0x3c05003a
    ctx->pc = 0x2382ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2382d0: 0x24a57d60
    ctx->pc = 0x2382d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32096));
    // 0x2382d4: 0x40302d
    ctx->pc = 0x2382d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2382d8: 0xdfbf0030
    ctx->pc = 0x2382d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2382dc: 0xdfb20020
    ctx->pc = 0x2382dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2382e0: 0xdfb10010
    ctx->pc = 0x2382e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2382e4: 0xdfb00000
    ctx->pc = 0x2382e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2382e8: 0x80b6252
    ctx->pc = 0x2382E8u;
    ctx->pc = 0x2382ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D8948u;
    sprintf_0x2d8948(rdram, ctx, runtime); return;
    ctx->pc = 0x2382F0u;
}
