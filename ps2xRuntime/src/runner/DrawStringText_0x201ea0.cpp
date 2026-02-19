#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawStringText
// Address: 0x201ea0 - 0x201f98
void DrawStringText_0x201ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201ea0u;

    // 0x201ea0: 0x27bdff20
    ctx->pc = 0x201ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x201ea4: 0xffbf0080
    ctx->pc = 0x201ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x201ea8: 0xffb60070
    ctx->pc = 0x201ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x201eac: 0xffb50060
    ctx->pc = 0x201eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x201eb0: 0xffb40050
    ctx->pc = 0x201eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x201eb4: 0xffb30040
    ctx->pc = 0x201eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x201eb8: 0xffb20030
    ctx->pc = 0x201eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x201ebc: 0xffb10020
    ctx->pc = 0x201ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x201ec0: 0xffb00010
    ctx->pc = 0x201ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x201ec4: 0x80982d
    ctx->pc = 0x201ec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ec8: 0xa0a02d
    ctx->pc = 0x201ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ecc: 0xc0802d
    ctx->pc = 0x201eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ed0: 0xe0a82d
    ctx->pc = 0x201ed0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ed4: 0x100882d
    ctx->pc = 0x201ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ed8: 0xffaa00d0
    ctx->pc = 0x201ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x201edc: 0xffab00d8
    ctx->pc = 0x201edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x201ee0: 0x120902d
    ctx->pc = 0x201ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ee4: 0x3c020031
    ctx->pc = 0x201ee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x201ee8: 0x2456f6a8
    ctx->pc = 0x201ee8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294964904));
    // 0x201eec: 0x220202d
    ctx->pc = 0x201eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ef0: 0x240282d
    ctx->pc = 0x201ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ef4: 0xc08065e
    ctx->pc = 0x201EF4u;
    SET_GPR_U32(ctx, 31, 0x201EFCu);
    ctx->pc = 0x201EF8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EFCu; }
    }
    if (ctx->pc != 0x201EFCu) { return; }
    ctx->pc = 0x201EFCu;
    // 0x201efc: 0x40282d
    ctx->pc = 0x201efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f00: 0x14a00007
    ctx->pc = 0x201F00u;
    {
        const bool branch_taken_0x201f00 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x201F04u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x201f00) {
            ctx->pc = 0x201F20u;
            goto label_201f20;
        }
    }
    ctx->pc = 0x201F08u;
    // 0x201f08: 0x248447e0
    ctx->pc = 0x201f08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18400));
    // 0x201f0c: 0x220282d
    ctx->pc = 0x201f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f10: 0xc0b492e
    ctx->pc = 0x201F10u;
    SET_GPR_U32(ctx, 31, 0x201F18u);
    ctx->pc = 0x201F14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F18u; }
    }
    if (ctx->pc != 0x201F18u) { return; }
    ctx->pc = 0x201F18u;
    // 0x201f18: 0x10000015
    ctx->pc = 0x201F18u;
    {
        const bool branch_taken_0x201f18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x201F1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x201f18) {
            ctx->pc = 0x201F70u;
            goto label_201f70;
        }
    }
    ctx->pc = 0x201F20u;
label_201f20:
    // 0x201f20: 0x6000006
    ctx->pc = 0x201F20u;
    {
        const bool branch_taken_0x201f20 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x201F24u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 10));
        if (branch_taken_0x201f20) {
            ctx->pc = 0x201F3Cu;
            goto label_201f3c;
        }
    }
    ctx->pc = 0x201F28u;
    // 0x201f28: 0x10400005
    ctx->pc = 0x201F28u;
    {
        const bool branch_taken_0x201f28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x201F2Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x201f28) {
            ctx->pc = 0x201F40u;
            goto label_201f40;
        }
    }
    ctx->pc = 0x201F30u;
    // 0x201f30: 0x2842000a
    ctx->pc = 0x201f30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 10));
    // 0x201f34: 0x14400003
    ctx->pc = 0x201F34u;
    {
        const bool branch_taken_0x201f34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x201F38u;
        SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
        if (branch_taken_0x201f34) {
            ctx->pc = 0x201F44u;
            goto label_201f44;
        }
    }
    ctx->pc = 0x201F3Cu;
label_201f3c:
    // 0x201f3c: 0x8fb00000
    ctx->pc = 0x201f3cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_201f40:
    // 0x201f40: 0x3c040031
    ctx->pc = 0x201f40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
label_201f44:
    // 0x201f44: 0x2484f2a8
    ctx->pc = 0x201f44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963880));
    // 0x201f48: 0xc0b5d5e
    ctx->pc = 0x201F48u;
    SET_GPR_U32(ctx, 31, 0x201F50u);
    ctx->pc = 0x201F4Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 208));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F50u; }
    }
    if (ctx->pc != 0x201F50u) { return; }
    ctx->pc = 0x201F50u;
    // 0x201f50: 0x2c0202d
    ctx->pc = 0x201f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f54: 0x220282d
    ctx->pc = 0x201f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f58: 0x260302d
    ctx->pc = 0x201f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f5c: 0x280382d
    ctx->pc = 0x201f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f60: 0x2408ffff
    ctx->pc = 0x201f60u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201f64: 0x200482d
    ctx->pc = 0x201f64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f68: 0xc08075c
    ctx->pc = 0x201F68u;
    SET_GPR_U32(ctx, 31, 0x201F70u);
    ctx->pc = 0x201F6Cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringTextSub_0x201d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F70u; }
    }
    if (ctx->pc != 0x201F70u) { return; }
    ctx->pc = 0x201F70u;
label_201f70:
    // 0x201f70: 0xdfbf0080
    ctx->pc = 0x201f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x201f74: 0xdfb60070
    ctx->pc = 0x201f74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x201f78: 0xdfb50060
    ctx->pc = 0x201f78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201f7c: 0xdfb40050
    ctx->pc = 0x201f7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201f80: 0xdfb30040
    ctx->pc = 0x201f80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201f84: 0xdfb20030
    ctx->pc = 0x201f84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201f88: 0xdfb10020
    ctx->pc = 0x201f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201f8c: 0xdfb00010
    ctx->pc = 0x201f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201f90: 0x3e00008
    ctx->pc = 0x201F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201F20u: goto label_201f20;
            case 0x201F3Cu: goto label_201f3c;
            case 0x201F40u: goto label_201f40;
            case 0x201F44u: goto label_201f44;
            case 0x201F70u: goto label_201f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201F98u;
}
