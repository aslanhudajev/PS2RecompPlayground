#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: xyechof
// Address: 0x2d1ba8 - 0x2d1c90
void xyechof_0x2d1ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1ba8u;

    // 0x2d1ba8: 0x27bdff00
    ctx->pc = 0x2d1ba8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2d1bac: 0xffbf0080
    ctx->pc = 0x2d1bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d1bb0: 0xffb20070
    ctx->pc = 0x2d1bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2d1bb4: 0xffb10060
    ctx->pc = 0x2d1bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2d1bb8: 0xffb00050
    ctx->pc = 0x2d1bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d1bbc: 0x80902d
    ctx->pc = 0x2d1bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bc0: 0xa0882d
    ctx->pc = 0x2d1bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bc4: 0xffa700d8
    ctx->pc = 0x2d1bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 7));
    // 0x2d1bc8: 0xffa800e0
    ctx->pc = 0x2d1bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 8));
    // 0x2d1bcc: 0xffa900e8
    ctx->pc = 0x2d1bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 9));
    // 0x2d1bd0: 0xffaa00f0
    ctx->pc = 0x2d1bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 10));
    // 0x2d1bd4: 0xffab00f8
    ctx->pc = 0x2d1bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 11));
    // 0x2d1bd8: 0x3c02003a
    ctx->pc = 0x2d1bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d1bdc: 0x8c421bdc
    ctx->pc = 0x2d1bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7132)));
    // 0x2d1be0: 0x10400025
    ctx->pc = 0x2D1BE0u;
    {
        const bool branch_taken_0x2d1be0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1BE4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d1be0) {
            ctx->pc = 0x2D1C78u;
            goto label_2d1c78;
        }
    }
    ctx->pc = 0x2D1BE8u;
    // 0x2d1be8: 0x2402ffff
    ctx->pc = 0x2d1be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d1bec: 0x16220002
    ctx->pc = 0x2D1BECu;
    {
        const bool branch_taken_0x2d1bec = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D1BF0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
        if (branch_taken_0x2d1bec) {
            ctx->pc = 0x2D1BF8u;
            goto label_2d1bf8;
        }
    }
    ctx->pc = 0x2D1BF4u;
    // 0x2d1bf4: 0x8c712250
    ctx->pc = 0x2d1bf4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 8784)));
label_2d1bf8:
    // 0x2d1bf8: 0x26220001
    ctx->pc = 0x2d1bf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d1bfc: 0xac622250
    ctx->pc = 0x2d1bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8784), GPR_U32(ctx, 2));
    // 0x2d1c00: 0x3a0202d
    ctx->pc = 0x2d1c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c04: 0xc0b5d5e
    ctx->pc = 0x2D1C04u;
    SET_GPR_U32(ctx, 31, 0x2D1C0Cu);
    ctx->pc = 0x2D1C08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 216));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1C0Cu; }
    }
    if (ctx->pc != 0x2D1C0Cu) { return; }
    ctx->pc = 0x2D1C0Cu;
    // 0x2d1c0c: 0x3c02003d
    ctx->pc = 0x2d1c0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d1c10: 0xc0b144c
    ctx->pc = 0x2D1C10u;
    SET_GPR_U32(ctx, 31, 0x2D1C18u);
    ctx->pc = 0x2D1C14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8780)));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1C18u; }
    }
    if (ctx->pc != 0x2D1C18u) { return; }
    ctx->pc = 0x2D1C18u;
    // 0x2d1c18: 0x40802d
    ctx->pc = 0x2d1c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c1c: 0x1220c0
    ctx->pc = 0x2d1c1cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 3));
    // 0x2d1c20: 0x1128c0
    ctx->pc = 0x2d1c20u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d1c24: 0xc0b13be
    ctx->pc = 0x2D1C24u;
    SET_GPR_U32(ctx, 31, 0x2D1C2Cu);
    ctx->pc = 0x2D1C28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawSysText_0x2c4ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1C2Cu; }
    }
    if (ctx->pc != 0x2D1C2Cu) { return; }
    ctx->pc = 0x2D1C2Cu;
    // 0x2d1c2c: 0x40882d
    ctx->pc = 0x2d1c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c30: 0xc0b144c
    ctx->pc = 0x2D1C30u;
    SET_GPR_U32(ctx, 31, 0x2D1C38u);
    ctx->pc = 0x2D1C34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1C38u; }
    }
    if (ctx->pc != 0x2D1C38u) { return; }
    ctx->pc = 0x2D1C38u;
    // 0x2d1c38: 0x1220000f
    ctx->pc = 0x2D1C38u;
    {
        const bool branch_taken_0x2d1c38 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1C3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d1c38) {
            ctx->pc = 0x2D1C78u;
            goto label_2d1c78;
        }
    }
    ctx->pc = 0x2D1C40u;
    // 0x2d1c40: 0x8c421be4
    ctx->pc = 0x2d1c40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7140)));
    // 0x2d1c44: 0x10400004
    ctx->pc = 0x2D1C44u;
    {
        const bool branch_taken_0x2d1c44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1C48u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
        if (branch_taken_0x2d1c44) {
            ctx->pc = 0x2D1C58u;
            goto label_2d1c58;
        }
    }
    ctx->pc = 0x2D1C4Cu;
    // 0x2d1c4c: 0x8e220000
    ctx->pc = 0x2d1c4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1c50: 0x431025
    ctx->pc = 0x2d1c50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1c54: 0xae220000
    ctx->pc = 0x2d1c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d1c58:
    // 0x2d1c58: 0x12200007
    ctx->pc = 0x2D1C58u;
    {
        const bool branch_taken_0x2d1c58 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1C5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d1c58) {
            ctx->pc = 0x2D1C78u;
            goto label_2d1c78;
        }
    }
    ctx->pc = 0x2D1C60u;
    // 0x2d1c60: 0x8c421be8
    ctx->pc = 0x2d1c60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7144)));
    // 0x2d1c64: 0x10400005
    ctx->pc = 0x2D1C64u;
    {
        const bool branch_taken_0x2d1c64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1C68u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2d1c64) {
            ctx->pc = 0x2D1C7Cu;
            goto label_2d1c7c;
        }
    }
    ctx->pc = 0x2D1C6Cu;
    // 0x2d1c6c: 0x8e220000
    ctx->pc = 0x2d1c6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1c70: 0x34420008
    ctx->pc = 0x2d1c70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x2d1c74: 0xae220000
    ctx->pc = 0x2d1c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d1c78:
    // 0x2d1c78: 0xdfbf0080
    ctx->pc = 0x2d1c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2d1c7c:
    // 0x2d1c7c: 0xdfb20070
    ctx->pc = 0x2d1c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d1c80: 0xdfb10060
    ctx->pc = 0x2d1c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d1c84: 0xdfb00050
    ctx->pc = 0x2d1c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1c88: 0x3e00008
    ctx->pc = 0x2D1C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1C8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D1BF8u: goto label_2d1bf8;
            case 0x2D1C58u: goto label_2d1c58;
            case 0x2D1C78u: goto label_2d1c78;
            case 0x2D1C7Cu: goto label_2d1c7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D1C90u;
}
