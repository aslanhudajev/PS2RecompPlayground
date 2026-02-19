#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GeneralMenu
// Address: 0x281ec8 - 0x2821d4
void GeneralMenu_0x281ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x281ec8u;

label_281ec8:
    // 0x281ec8: 0x27bdffd0
    ctx->pc = 0x281ec8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_281ecc:
    // 0x281ecc: 0xffbf0020
    ctx->pc = 0x281eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_281ed0:
    // 0x281ed0: 0xffb10010
    ctx->pc = 0x281ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_281ed4:
    // 0x281ed4: 0xffb00000
    ctx->pc = 0x281ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_281ed8:
    // 0x281ed8: 0x3c020031
    ctx->pc = 0x281ed8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_281edc:
    // 0x281edc: 0x8c430018
    ctx->pc = 0x281edcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_281ee0:
    // 0x281ee0: 0x24024010
    ctx->pc = 0x281ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_281ee4:
    // 0x281ee4: 0x14620033
label_281ee8:
    if (ctx->pc == 0x281EE8u) {
        ctx->pc = 0x281EE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x281EECu;
        goto label_281eec;
    }
    ctx->pc = 0x281EE4u;
    {
        const bool branch_taken_0x281ee4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x281EE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x281ee4) {
            ctx->pc = 0x281FB4u;
            goto label_281fb4;
        }
    }
    ctx->pc = 0x281EECu;
label_281eec:
    // 0x281eec: 0x3c020031
    ctx->pc = 0x281eecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_281ef0:
    // 0x281ef0: 0xdc420e28
    ctx->pc = 0x281ef0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_281ef4:
    // 0x281ef4: 0x30420004
    ctx->pc = 0x281ef4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_281ef8:
    // 0x281ef8: 0x1040002d
label_281efc:
    if (ctx->pc == 0x281EFCu) {
        ctx->pc = 0x281EFCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x281F00u;
        goto label_281f00;
    }
    ctx->pc = 0x281EF8u;
    {
        const bool branch_taken_0x281ef8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281EFCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x281ef8) {
            ctx->pc = 0x281FB0u;
            goto label_281fb0;
        }
    }
    ctx->pc = 0x281F00u;
label_281f00:
    // 0x281f00: 0x8c629b90
    ctx->pc = 0x281f00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941584)));
label_281f04:
    // 0x281f04: 0x2c420018
    ctx->pc = 0x281f04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 24));
label_281f08:
    // 0x281f08: 0x50400001
label_281f0c:
    if (ctx->pc == 0x281F0Cu) {
        ctx->pc = 0x281F0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941584), GPR_U32(ctx, 0));
        ctx->pc = 0x281F10u;
        goto label_281f10;
    }
    ctx->pc = 0x281F08u;
    {
        const bool branch_taken_0x281f08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x281f08) {
            ctx->pc = 0x281F0Cu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294941584), GPR_U32(ctx, 0));
            ctx->pc = 0x281F10u;
            goto label_281f10;
        }
    }
    ctx->pc = 0x281F10u;
label_281f10:
    // 0x281f10: 0x3c030035
    ctx->pc = 0x281f10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_281f14:
    // 0x281f14: 0x8c629b88
    ctx->pc = 0x281f14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941576)));
label_281f18:
    // 0x281f18: 0x1440002b
label_281f1c:
    if (ctx->pc == 0x281F1Cu) {
        ctx->pc = 0x281F1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x281F20u;
        goto label_281f20;
    }
    ctx->pc = 0x281F18u;
    {
        const bool branch_taken_0x281f18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x281F1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x281f18) {
            ctx->pc = 0x281FC8u;
            goto label_281fc8;
        }
    }
    ctx->pc = 0x281F20u;
label_281f20:
    // 0x281f20: 0x24020001
    ctx->pc = 0x281f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_281f24:
    // 0x281f24: 0xac629b88
    ctx->pc = 0x281f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941576), GPR_U32(ctx, 2));
label_281f28:
    // 0x281f28: 0x3c020035
    ctx->pc = 0x281f28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_281f2c:
    // 0x281f2c: 0xac409b8c
    ctx->pc = 0x281f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941580), GPR_U32(ctx, 0));
label_281f30:
    // 0x281f30: 0x3c02003c
    ctx->pc = 0x281f30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_281f34:
    // 0x281f34: 0xac403ab4
    ctx->pc = 0x281f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15028), GPR_U32(ctx, 0));
label_281f38:
    // 0x281f38: 0x3c02003c
    ctx->pc = 0x281f38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_281f3c:
    // 0x281f3c: 0xac403ab8
    ctx->pc = 0x281f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15032), GPR_U32(ctx, 0));
label_281f40:
    // 0x281f40: 0x3c110031
    ctx->pc = 0x281f40u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
label_281f44:
    // 0x281f44: 0x2631ffe8
    ctx->pc = 0x281f44u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967272));
label_281f48:
    // 0x281f48: 0x3c020034
    ctx->pc = 0x281f48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_281f4c:
    // 0x281f4c: 0x8c44e7f8
    ctx->pc = 0x281f4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
label_281f50:
    // 0x281f50: 0x42200
    ctx->pc = 0x281f50u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
label_281f54:
    // 0x281f54: 0x3c020034
    ctx->pc = 0x281f54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_281f58:
    // 0x281f58: 0x9042e7fc
    ctx->pc = 0x281f58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961148)));
label_281f5c:
    // 0x281f5c: 0x822025
    ctx->pc = 0x281f5cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_281f60:
    // 0x281f60: 0xc0986b4
label_281f64:
    if (ctx->pc == 0x281F64u) {
        ctx->pc = 0x281F64u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
        ctx->pc = 0x281F68u;
        goto label_281f68;
    }
    ctx->pc = 0x281F60u;
    SET_GPR_U32(ctx, 31, 0x281F68u);
    ctx->pc = 0x281F64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F68u; }
    }
    if (ctx->pc != 0x281F68u) { return; }
    ctx->pc = 0x281F68u;
label_281f68:
    // 0x281f68: 0xc094098
label_281f6c:
    if (ctx->pc == 0x281F6Cu) {
        ctx->pc = 0x281F6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x281F70u;
        goto label_281f70;
    }
    ctx->pc = 0x281F68u;
    SET_GPR_U32(ctx, 31, 0x281F70u);
    ctx->pc = 0x281F6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x250260u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShowMilestones_0x250260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F70u; }
    }
    if (ctx->pc != 0x281F70u) { return; }
    ctx->pc = 0x281F70u;
label_281f70:
    // 0x281f70: 0x24100002
    ctx->pc = 0x281f70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
label_281f74:
    // 0x281f74: 0x2800a
    ctx->pc = 0x281f74u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
label_281f78:
    // 0x281f78: 0xc09404a
label_281f7c:
    if (ctx->pc == 0x281F7Cu) {
        ctx->pc = 0x281F7Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x281F80u;
        goto label_281f80;
    }
    ctx->pc = 0x281F78u;
    SET_GPR_U32(ctx, 31, 0x281F80u);
    ctx->pc = 0x281F7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x250128u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShowCameras_0x250128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F80u; }
    }
    if (ctx->pc != 0x281F80u) { return; }
    ctx->pc = 0x281F80u;
label_281f80:
    // 0x281f80: 0x2102b
    ctx->pc = 0x281f80u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_281f84:
    // 0x281f84: 0x501025
    ctx->pc = 0x281f84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_281f88:
    // 0x281f88: 0xae220014
    ctx->pc = 0x281f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_281f8c:
    // 0x281f8c: 0x3c040035
    ctx->pc = 0x281f8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_281f90:
    // 0x281f90: 0x3c030032
    ctx->pc = 0x281f90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_281f94:
    // 0x281f94: 0x3c020032
    ctx->pc = 0x281f94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_281f98:
    // 0x281f98: 0x8c42fd5c
    ctx->pc = 0x281f98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966620)));
label_281f9c:
    // 0x281f9c: 0x21040
    ctx->pc = 0x281f9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_281fa0:
    // 0x281fa0: 0x8c63fd58
    ctx->pc = 0x281fa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294966616)));
label_281fa4:
    // 0x281fa4: 0x431025
    ctx->pc = 0x281fa4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_281fa8:
    // 0x281fa8: 0x10000003
label_281fac:
    if (ctx->pc == 0x281FACu) {
        ctx->pc = 0x281FACu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294941588), GPR_U32(ctx, 2));
        ctx->pc = 0x281FB0u;
        goto label_281fb0;
    }
    ctx->pc = 0x281FA8u;
    {
        const bool branch_taken_0x281fa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281FACu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294941588), GPR_U32(ctx, 2));
        if (branch_taken_0x281fa8) {
            ctx->pc = 0x281FB8u;
            goto label_281fb8;
        }
    }
    ctx->pc = 0x281FB0u;
label_281fb0:
    // 0x281fb0: 0x3c020035
    ctx->pc = 0x281fb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_281fb4:
    // 0x281fb4: 0xac409b88
    ctx->pc = 0x281fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941576), GPR_U32(ctx, 0));
label_281fb8:
    // 0x281fb8: 0x3c020035
    ctx->pc = 0x281fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_281fbc:
    // 0x281fbc: 0x8c429b88
    ctx->pc = 0x281fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941576)));
label_281fc0:
    // 0x281fc0: 0x1040007f
label_281fc4:
    if (ctx->pc == 0x281FC4u) {
        ctx->pc = 0x281FC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x281FC8u;
        goto label_281fc8;
    }
    ctx->pc = 0x281FC0u;
    {
        const bool branch_taken_0x281fc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281FC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x281fc0) {
            ctx->pc = 0x2821C0u;
            goto label_2821c0;
        }
    }
    ctx->pc = 0x281FC8u;
label_281fc8:
    // 0x281fc8: 0x8c439b90
    ctx->pc = 0x281fc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294941584)));
label_281fcc:
    // 0x281fcc: 0x24020030
    ctx->pc = 0x281fccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_281fd0:
    // 0x281fd0: 0x621818
    ctx->pc = 0x281fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_281fd4:
    // 0x281fd4: 0x3c020035
    ctx->pc = 0x281fd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_281fd8:
    // 0x281fd8: 0x24429708
    ctx->pc = 0x281fd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940424));
label_281fdc:
    // 0x281fdc: 0xc0a06ce
label_281fe0:
    if (ctx->pc == 0x281FE0u) {
        ctx->pc = 0x281FE0u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x281FE4u;
        goto label_281fe4;
    }
    ctx->pc = 0x281FDCu;
    SET_GPR_U32(ctx, 31, 0x281FE4u);
    ctx->pc = 0x281FE0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x281B38u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispMenu_0x281b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FE4u; }
    }
    if (ctx->pc != 0x281FE4u) { return; }
    ctx->pc = 0x281FE4u;
label_281fe4:
    // 0x281fe4: 0x3c020031
    ctx->pc = 0x281fe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_281fe8:
    // 0x281fe8: 0x8c421b50
    ctx->pc = 0x281fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6992)));
label_281fec:
    // 0x281fec: 0x3c030200
    ctx->pc = 0x281fecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
label_281ff0:
    // 0x281ff0: 0x431024
    ctx->pc = 0x281ff0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_281ff4:
    // 0x281ff4: 0x10400007
label_281ff8:
    if (ctx->pc == 0x281FF8u) {
        ctx->pc = 0x281FF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x281FFCu;
        goto label_281ffc;
    }
    ctx->pc = 0x281FF4u;
    {
        const bool branch_taken_0x281ff4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281FF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x281ff4) {
            ctx->pc = 0x282014u;
            goto label_282014;
        }
    }
    ctx->pc = 0x281FFCu;
label_281ffc:
    // 0x281ffc: 0x8e020028
    ctx->pc = 0x281ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_282000:
    // 0x282000: 0x10400069
label_282004:
    if (ctx->pc == 0x282004u) {
        ctx->pc = 0x282004u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 999));
        ctx->pc = 0x282008u;
        goto label_282008;
    }
    ctx->pc = 0x282000u;
    {
        const bool branch_taken_0x282000 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282004u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 999));
        if (branch_taken_0x282000) {
            ctx->pc = 0x2821A8u;
            goto label_2821a8;
        }
    }
    ctx->pc = 0x282008u;
label_282008:
    // 0x282008: 0x8e060004
    ctx->pc = 0x282008u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28200c:
    // 0x28200c: 0x10000056
label_282010:
    if (ctx->pc == 0x282010u) {
        ctx->pc = 0x282010u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x282014u;
        goto label_282014;
    }
    ctx->pc = 0x28200Cu;
    {
        const bool branch_taken_0x28200c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282010u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x28200c) {
            ctx->pc = 0x282168u;
            goto label_282168;
        }
    }
    ctx->pc = 0x282014u;
label_282014:
    // 0x282014: 0x8c421b50
    ctx->pc = 0x282014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6992)));
label_282018:
    // 0x282018: 0x3c030100
    ctx->pc = 0x282018u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
label_28201c:
    // 0x28201c: 0x431024
    ctx->pc = 0x28201cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_282020:
    // 0x282020: 0x10400007
label_282024:
    if (ctx->pc == 0x282024u) {
        ctx->pc = 0x282024u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x282028u;
        goto label_282028;
    }
    ctx->pc = 0x282020u;
    {
        const bool branch_taken_0x282020 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282024u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x282020) {
            ctx->pc = 0x282040u;
            goto label_282040;
        }
    }
    ctx->pc = 0x282028u;
label_282028:
    // 0x282028: 0x8e020028
    ctx->pc = 0x282028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_28202c:
    // 0x28202c: 0x1040005e
label_282030:
    if (ctx->pc == 0x282030u) {
        ctx->pc = 0x282030u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 998));
        ctx->pc = 0x282034u;
        goto label_282034;
    }
    ctx->pc = 0x28202Cu;
    {
        const bool branch_taken_0x28202c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282030u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 998));
        if (branch_taken_0x28202c) {
            ctx->pc = 0x2821A8u;
            goto label_2821a8;
        }
    }
    ctx->pc = 0x282034u;
label_282034:
    // 0x282034: 0x8e060004
    ctx->pc = 0x282034u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_282038:
    // 0x282038: 0x1000004b
label_28203c:
    if (ctx->pc == 0x28203Cu) {
        ctx->pc = 0x28203Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x282040u;
        goto label_282040;
    }
    ctx->pc = 0x282038u;
    {
        const bool branch_taken_0x282038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28203Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x282038) {
            ctx->pc = 0x282168u;
            goto label_282168;
        }
    }
    ctx->pc = 0x282040u;
label_282040:
    // 0x282040: 0x8c421b50
    ctx->pc = 0x282040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6992)));
label_282044:
    // 0x282044: 0x30420030
    ctx->pc = 0x282044u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
label_282048:
    // 0x282048: 0x10400013
label_28204c:
    if (ctx->pc == 0x28204Cu) {
        ctx->pc = 0x28204Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x282050u;
        goto label_282050;
    }
    ctx->pc = 0x282048u;
    {
        const bool branch_taken_0x282048 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28204Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x282048) {
            ctx->pc = 0x282098u;
            goto label_282098;
        }
    }
    ctx->pc = 0x282050u;
label_282050:
    // 0x282050: 0x24050017
    ctx->pc = 0x282050u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 23));
label_282054:
    // 0x282054: 0x24040030
    ctx->pc = 0x282054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
label_282058:
    // 0x282058: 0x3c020035
    ctx->pc = 0x282058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28205c:
    // 0x28205c: 0x24479708
    ctx->pc = 0x28205cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294940424));
label_282060:
    // 0x282060: 0x8c629b90
    ctx->pc = 0x282060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941584)));
label_282064:
    // 0x282064: 0x0
    ctx->pc = 0x282064u;
    // NOP
label_282068:
    // 0x282068: 0x2442ffff
    ctx->pc = 0x282068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_28206c:
    // 0x28206c: 0x4410002
label_282070:
    if (ctx->pc == 0x282070u) {
        ctx->pc = 0x282070u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941584), GPR_U32(ctx, 2));
        ctx->pc = 0x282074u;
        goto label_282074;
    }
    ctx->pc = 0x28206Cu;
    {
        const bool branch_taken_0x28206c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x282070u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941584), GPR_U32(ctx, 2));
        if (branch_taken_0x28206c) {
            ctx->pc = 0x282078u;
            goto label_282078;
        }
    }
    ctx->pc = 0x282074u;
label_282074:
    // 0x282074: 0xac659b90
    ctx->pc = 0x282074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941584), GPR_U32(ctx, 5));
label_282078:
    // 0x282078: 0x8c629b90
    ctx->pc = 0x282078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941584)));
label_28207c:
    // 0x28207c: 0x443018
    ctx->pc = 0x28207cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_282080:
    // 0x282080: 0xc78021
    ctx->pc = 0x282080u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_282084:
    // 0x282084: 0x8e020000
    ctx->pc = 0x282084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_282088:
    // 0x282088: 0x1040fff7
label_28208c:
    if (ctx->pc == 0x28208Cu) {
        ctx->pc = 0x28208Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941584)));
        ctx->pc = 0x282090u;
        goto label_282090;
    }
    ctx->pc = 0x282088u;
    {
        const bool branch_taken_0x282088 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28208Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941584)));
        if (branch_taken_0x282088) {
            ctx->pc = 0x282068u;
            goto label_282068;
        }
    }
    ctx->pc = 0x282090u;
label_282090:
    // 0x282090: 0x10000046
label_282094:
    if (ctx->pc == 0x282094u) {
        ctx->pc = 0x282094u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x282098u;
        goto label_282098;
    }
    ctx->pc = 0x282090u;
    {
        const bool branch_taken_0x282090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282094u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x282090) {
            ctx->pc = 0x2821ACu;
            goto label_2821ac;
        }
    }
    ctx->pc = 0x282098u;
label_282098:
    // 0x282098: 0x3c020031
    ctx->pc = 0x282098u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_28209c:
    // 0x28209c: 0x8c421b50
    ctx->pc = 0x28209cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6992)));
label_2820a0:
    // 0x2820a0: 0x304200c0
    ctx->pc = 0x2820a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
label_2820a4:
    // 0x2820a4: 0x10400011
label_2820a8:
    if (ctx->pc == 0x2820A8u) {
        ctx->pc = 0x2820A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2820ACu;
        goto label_2820ac;
    }
    ctx->pc = 0x2820A4u;
    {
        const bool branch_taken_0x2820a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2820A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x2820a4) {
            ctx->pc = 0x2820ECu;
            goto label_2820ec;
        }
    }
    ctx->pc = 0x2820ACu;
label_2820ac:
    // 0x2820ac: 0x3c020035
    ctx->pc = 0x2820acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2820b0:
    // 0x2820b0: 0x24469708
    ctx->pc = 0x2820b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294940424));
label_2820b4:
    // 0x2820b4: 0x8c629b90
    ctx->pc = 0x2820b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941584)));
label_2820b8:
    // 0x2820b8: 0x24420001
    ctx->pc = 0x2820b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2820bc:
    // 0x2820bc: 0xac629b90
    ctx->pc = 0x2820bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941584), GPR_U32(ctx, 2));
label_2820c0:
    // 0x2820c0: 0x2c420018
    ctx->pc = 0x2820c0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 24));
label_2820c4:
    // 0x2820c4: 0x50400001
label_2820c8:
    if (ctx->pc == 0x2820C8u) {
        ctx->pc = 0x2820C8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941584), GPR_U32(ctx, 0));
        ctx->pc = 0x2820CCu;
        goto label_2820cc;
    }
    ctx->pc = 0x2820C4u;
    {
        const bool branch_taken_0x2820c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2820c4) {
            ctx->pc = 0x2820C8u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294941584), GPR_U32(ctx, 0));
            ctx->pc = 0x2820CCu;
            goto label_2820cc;
        }
    }
    ctx->pc = 0x2820CCu;
label_2820cc:
    // 0x2820cc: 0x8c629b90
    ctx->pc = 0x2820ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941584)));
label_2820d0:
    // 0x2820d0: 0x442818
    ctx->pc = 0x2820d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2820d4:
    // 0x2820d4: 0xa68021
    ctx->pc = 0x2820d4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2820d8:
    // 0x2820d8: 0x8e020000
    ctx->pc = 0x2820d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2820dc:
    // 0x2820dc: 0x1040fff6
label_2820e0:
    if (ctx->pc == 0x2820E0u) {
        ctx->pc = 0x2820E0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941584)));
        ctx->pc = 0x2820E4u;
        goto label_2820e4;
    }
    ctx->pc = 0x2820DCu;
    {
        const bool branch_taken_0x2820dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2820E0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941584)));
        if (branch_taken_0x2820dc) {
            ctx->pc = 0x2820B8u;
            goto label_2820b8;
        }
    }
    ctx->pc = 0x2820E4u;
label_2820e4:
    // 0x2820e4: 0x10000031
label_2820e8:
    if (ctx->pc == 0x2820E8u) {
        ctx->pc = 0x2820E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2820ECu;
        goto label_2820ec;
    }
    ctx->pc = 0x2820E4u;
    {
        const bool branch_taken_0x2820e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2820E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2820e4) {
            ctx->pc = 0x2821ACu;
            goto label_2821ac;
        }
    }
    ctx->pc = 0x2820ECu;
label_2820ec:
    // 0x2820ec: 0x3c020031
    ctx->pc = 0x2820ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2820f0:
    // 0x2820f0: 0x8c421b50
    ctx->pc = 0x2820f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6992)));
label_2820f4:
    // 0x2820f4: 0x30420003
    ctx->pc = 0x2820f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_2820f8:
    // 0x2820f8: 0x10400007
label_2820fc:
    if (ctx->pc == 0x2820FCu) {
        ctx->pc = 0x2820FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x282100u;
        goto label_282100;
    }
    ctx->pc = 0x2820F8u;
    {
        const bool branch_taken_0x2820f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2820FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2820f8) {
            ctx->pc = 0x282118u;
            goto label_282118;
        }
    }
    ctx->pc = 0x282100u;
label_282100:
    // 0x282100: 0x8e020028
    ctx->pc = 0x282100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_282104:
    // 0x282104: 0x10400028
label_282108:
    if (ctx->pc == 0x282108u) {
        ctx->pc = 0x282108u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28210Cu;
        goto label_28210c;
    }
    ctx->pc = 0x282104u;
    {
        const bool branch_taken_0x282104 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282108u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x282104) {
            ctx->pc = 0x2821A8u;
            goto label_2821a8;
        }
    }
    ctx->pc = 0x28210Cu;
label_28210c:
    // 0x28210c: 0x8e060004
    ctx->pc = 0x28210cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_282110:
    // 0x282110: 0x10000015
label_282114:
    if (ctx->pc == 0x282114u) {
        ctx->pc = 0x282114u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x282118u;
        goto label_282118;
    }
    ctx->pc = 0x282110u;
    {
        const bool branch_taken_0x282110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282114u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x282110) {
            ctx->pc = 0x282168u;
            goto label_282168;
        }
    }
    ctx->pc = 0x282118u;
label_282118:
    // 0x282118: 0x8c421b50
    ctx->pc = 0x282118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6992)));
label_28211c:
    // 0x28211c: 0x3042000c
    ctx->pc = 0x28211cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 12));
label_282120:
    // 0x282120: 0x10400007
label_282124:
    if (ctx->pc == 0x282124u) {
        ctx->pc = 0x282124u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x282128u;
        goto label_282128;
    }
    ctx->pc = 0x282120u;
    {
        const bool branch_taken_0x282120 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282124u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x282120) {
            ctx->pc = 0x282140u;
            goto label_282140;
        }
    }
    ctx->pc = 0x282128u;
label_282128:
    // 0x282128: 0x8e020028
    ctx->pc = 0x282128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_28212c:
    // 0x28212c: 0x1040001e
label_282130:
    if (ctx->pc == 0x282130u) {
        ctx->pc = 0x282130u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x282134u;
        goto label_282134;
    }
    ctx->pc = 0x28212Cu;
    {
        const bool branch_taken_0x28212c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282130u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28212c) {
            ctx->pc = 0x2821A8u;
            goto label_2821a8;
        }
    }
    ctx->pc = 0x282134u;
label_282134:
    // 0x282134: 0x8e060004
    ctx->pc = 0x282134u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_282138:
    // 0x282138: 0x1000000b
label_28213c:
    if (ctx->pc == 0x28213Cu) {
        ctx->pc = 0x28213Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x282140u;
        goto label_282140;
    }
    ctx->pc = 0x282138u;
    {
        const bool branch_taken_0x282138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28213Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x282138) {
            ctx->pc = 0x282168u;
            goto label_282168;
        }
    }
    ctx->pc = 0x282140u;
label_282140:
    // 0x282140: 0x8c421b50
    ctx->pc = 0x282140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6992)));
label_282144:
    // 0x282144: 0x3c030080
    ctx->pc = 0x282144u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
label_282148:
    // 0x282148: 0x431024
    ctx->pc = 0x282148u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28214c:
    // 0x28214c: 0x1040000a
label_282150:
    if (ctx->pc == 0x282150u) {
        ctx->pc = 0x282150u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x282154u;
        goto label_282154;
    }
    ctx->pc = 0x28214Cu;
    {
        const bool branch_taken_0x28214c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282150u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x28214c) {
            ctx->pc = 0x282178u;
            goto label_282178;
        }
    }
    ctx->pc = 0x282154u;
label_282154:
    // 0x282154: 0x8e020028
    ctx->pc = 0x282154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_282158:
    // 0x282158: 0x10400013
label_28215c:
    if (ctx->pc == 0x28215Cu) {
        ctx->pc = 0x28215Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x282160u;
        goto label_282160;
    }
    ctx->pc = 0x282158u;
    {
        const bool branch_taken_0x282158 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28215Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x282158) {
            ctx->pc = 0x2821A8u;
            goto label_2821a8;
        }
    }
    ctx->pc = 0x282160u;
label_282160:
    // 0x282160: 0x8e060004
    ctx->pc = 0x282160u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_282164:
    // 0x282164: 0x8e04002c
    ctx->pc = 0x282164u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_282168:
    // 0x282168: 0x40f809
label_28216c:
    if (ctx->pc == 0x28216Cu) {
        ctx->pc = 0x28216Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x282170u;
        goto label_282170;
    }
    ctx->pc = 0x282168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x282170u);
        ctx->pc = 0x28216Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281EC8u: goto label_281ec8;
            case 0x281ECCu: goto label_281ecc;
            case 0x281ED0u: goto label_281ed0;
            case 0x281ED4u: goto label_281ed4;
            case 0x281ED8u: goto label_281ed8;
            case 0x281EDCu: goto label_281edc;
            case 0x281EE0u: goto label_281ee0;
            case 0x281EE4u: goto label_281ee4;
            case 0x281EE8u: goto label_281ee8;
            case 0x281EECu: goto label_281eec;
            case 0x281EF0u: goto label_281ef0;
            case 0x281EF4u: goto label_281ef4;
            case 0x281EF8u: goto label_281ef8;
            case 0x281EFCu: goto label_281efc;
            case 0x281F00u: goto label_281f00;
            case 0x281F04u: goto label_281f04;
            case 0x281F08u: goto label_281f08;
            case 0x281F0Cu: goto label_281f0c;
            case 0x281F10u: goto label_281f10;
            case 0x281F14u: goto label_281f14;
            case 0x281F18u: goto label_281f18;
            case 0x281F1Cu: goto label_281f1c;
            case 0x281F20u: goto label_281f20;
            case 0x281F24u: goto label_281f24;
            case 0x281F28u: goto label_281f28;
            case 0x281F2Cu: goto label_281f2c;
            case 0x281F30u: goto label_281f30;
            case 0x281F34u: goto label_281f34;
            case 0x281F38u: goto label_281f38;
            case 0x281F3Cu: goto label_281f3c;
            case 0x281F40u: goto label_281f40;
            case 0x281F44u: goto label_281f44;
            case 0x281F48u: goto label_281f48;
            case 0x281F4Cu: goto label_281f4c;
            case 0x281F50u: goto label_281f50;
            case 0x281F54u: goto label_281f54;
            case 0x281F58u: goto label_281f58;
            case 0x281F5Cu: goto label_281f5c;
            case 0x281F60u: goto label_281f60;
            case 0x281F64u: goto label_281f64;
            case 0x281F68u: goto label_281f68;
            case 0x281F6Cu: goto label_281f6c;
            case 0x281F70u: goto label_281f70;
            case 0x281F74u: goto label_281f74;
            case 0x281F78u: goto label_281f78;
            case 0x281F7Cu: goto label_281f7c;
            case 0x281F80u: goto label_281f80;
            case 0x281F84u: goto label_281f84;
            case 0x281F88u: goto label_281f88;
            case 0x281F8Cu: goto label_281f8c;
            case 0x281F90u: goto label_281f90;
            case 0x281F94u: goto label_281f94;
            case 0x281F98u: goto label_281f98;
            case 0x281F9Cu: goto label_281f9c;
            case 0x281FA0u: goto label_281fa0;
            case 0x281FA4u: goto label_281fa4;
            case 0x281FA8u: goto label_281fa8;
            case 0x281FACu: goto label_281fac;
            case 0x281FB0u: goto label_281fb0;
            case 0x281FB4u: goto label_281fb4;
            case 0x281FB8u: goto label_281fb8;
            case 0x281FBCu: goto label_281fbc;
            case 0x281FC0u: goto label_281fc0;
            case 0x281FC4u: goto label_281fc4;
            case 0x281FC8u: goto label_281fc8;
            case 0x281FCCu: goto label_281fcc;
            case 0x281FD0u: goto label_281fd0;
            case 0x281FD4u: goto label_281fd4;
            case 0x281FD8u: goto label_281fd8;
            case 0x281FDCu: goto label_281fdc;
            case 0x281FE0u: goto label_281fe0;
            case 0x281FE4u: goto label_281fe4;
            case 0x281FE8u: goto label_281fe8;
            case 0x281FECu: goto label_281fec;
            case 0x281FF0u: goto label_281ff0;
            case 0x281FF4u: goto label_281ff4;
            case 0x281FF8u: goto label_281ff8;
            case 0x281FFCu: goto label_281ffc;
            case 0x282000u: goto label_282000;
            case 0x282004u: goto label_282004;
            case 0x282008u: goto label_282008;
            case 0x28200Cu: goto label_28200c;
            case 0x282010u: goto label_282010;
            case 0x282014u: goto label_282014;
            case 0x282018u: goto label_282018;
            case 0x28201Cu: goto label_28201c;
            case 0x282020u: goto label_282020;
            case 0x282024u: goto label_282024;
            case 0x282028u: goto label_282028;
            case 0x28202Cu: goto label_28202c;
            case 0x282030u: goto label_282030;
            case 0x282034u: goto label_282034;
            case 0x282038u: goto label_282038;
            case 0x28203Cu: goto label_28203c;
            case 0x282040u: goto label_282040;
            case 0x282044u: goto label_282044;
            case 0x282048u: goto label_282048;
            case 0x28204Cu: goto label_28204c;
            case 0x282050u: goto label_282050;
            case 0x282054u: goto label_282054;
            case 0x282058u: goto label_282058;
            case 0x28205Cu: goto label_28205c;
            case 0x282060u: goto label_282060;
            case 0x282064u: goto label_282064;
            case 0x282068u: goto label_282068;
            case 0x28206Cu: goto label_28206c;
            case 0x282070u: goto label_282070;
            case 0x282074u: goto label_282074;
            case 0x282078u: goto label_282078;
            case 0x28207Cu: goto label_28207c;
            case 0x282080u: goto label_282080;
            case 0x282084u: goto label_282084;
            case 0x282088u: goto label_282088;
            case 0x28208Cu: goto label_28208c;
            case 0x282090u: goto label_282090;
            case 0x282094u: goto label_282094;
            case 0x282098u: goto label_282098;
            case 0x28209Cu: goto label_28209c;
            case 0x2820A0u: goto label_2820a0;
            case 0x2820A4u: goto label_2820a4;
            case 0x2820A8u: goto label_2820a8;
            case 0x2820ACu: goto label_2820ac;
            case 0x2820B0u: goto label_2820b0;
            case 0x2820B4u: goto label_2820b4;
            case 0x2820B8u: goto label_2820b8;
            case 0x2820BCu: goto label_2820bc;
            case 0x2820C0u: goto label_2820c0;
            case 0x2820C4u: goto label_2820c4;
            case 0x2820C8u: goto label_2820c8;
            case 0x2820CCu: goto label_2820cc;
            case 0x2820D0u: goto label_2820d0;
            case 0x2820D4u: goto label_2820d4;
            case 0x2820D8u: goto label_2820d8;
            case 0x2820DCu: goto label_2820dc;
            case 0x2820E0u: goto label_2820e0;
            case 0x2820E4u: goto label_2820e4;
            case 0x2820E8u: goto label_2820e8;
            case 0x2820ECu: goto label_2820ec;
            case 0x2820F0u: goto label_2820f0;
            case 0x2820F4u: goto label_2820f4;
            case 0x2820F8u: goto label_2820f8;
            case 0x2820FCu: goto label_2820fc;
            case 0x282100u: goto label_282100;
            case 0x282104u: goto label_282104;
            case 0x282108u: goto label_282108;
            case 0x28210Cu: goto label_28210c;
            case 0x282110u: goto label_282110;
            case 0x282114u: goto label_282114;
            case 0x282118u: goto label_282118;
            case 0x28211Cu: goto label_28211c;
            case 0x282120u: goto label_282120;
            case 0x282124u: goto label_282124;
            case 0x282128u: goto label_282128;
            case 0x28212Cu: goto label_28212c;
            case 0x282130u: goto label_282130;
            case 0x282134u: goto label_282134;
            case 0x282138u: goto label_282138;
            case 0x28213Cu: goto label_28213c;
            case 0x282140u: goto label_282140;
            case 0x282144u: goto label_282144;
            case 0x282148u: goto label_282148;
            case 0x28214Cu: goto label_28214c;
            case 0x282150u: goto label_282150;
            case 0x282154u: goto label_282154;
            case 0x282158u: goto label_282158;
            case 0x28215Cu: goto label_28215c;
            case 0x282160u: goto label_282160;
            case 0x282164u: goto label_282164;
            case 0x282168u: goto label_282168;
            case 0x28216Cu: goto label_28216c;
            case 0x282170u: goto label_282170;
            case 0x282174u: goto label_282174;
            case 0x282178u: goto label_282178;
            case 0x28217Cu: goto label_28217c;
            case 0x282180u: goto label_282180;
            case 0x282184u: goto label_282184;
            case 0x282188u: goto label_282188;
            case 0x28218Cu: goto label_28218c;
            case 0x282190u: goto label_282190;
            case 0x282194u: goto label_282194;
            case 0x282198u: goto label_282198;
            case 0x28219Cu: goto label_28219c;
            case 0x2821A0u: goto label_2821a0;
            case 0x2821A4u: goto label_2821a4;
            case 0x2821A8u: goto label_2821a8;
            case 0x2821ACu: goto label_2821ac;
            case 0x2821B0u: goto label_2821b0;
            case 0x2821B4u: goto label_2821b4;
            case 0x2821B8u: goto label_2821b8;
            case 0x2821BCu: goto label_2821bc;
            case 0x2821C0u: goto label_2821c0;
            case 0x2821C4u: goto label_2821c4;
            case 0x2821C8u: goto label_2821c8;
            case 0x2821CCu: goto label_2821cc;
            case 0x2821D0u: goto label_2821d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x282170u; }
            if (ctx->pc != 0x282170u) { return; }
        }
    }
    ctx->pc = 0x282170u;
label_282170:
    // 0x282170: 0x1000000e
label_282174:
    if (ctx->pc == 0x282174u) {
        ctx->pc = 0x282174u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x282178u;
        goto label_282178;
    }
    ctx->pc = 0x282170u;
    {
        const bool branch_taken_0x282170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282174u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x282170) {
            ctx->pc = 0x2821ACu;
            goto label_2821ac;
        }
    }
    ctx->pc = 0x282178u;
label_282178:
    // 0x282178: 0x8c421b50
    ctx->pc = 0x282178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6992)));
label_28217c:
    // 0x28217c: 0x3c030040
    ctx->pc = 0x28217cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
label_282180:
    // 0x282180: 0x431024
    ctx->pc = 0x282180u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_282184:
    // 0x282184: 0x10400009
label_282188:
    if (ctx->pc == 0x282188u) {
        ctx->pc = 0x282188u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28218Cu;
        goto label_28218c;
    }
    ctx->pc = 0x282184u;
    {
        const bool branch_taken_0x282184 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282188u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x282184) {
            ctx->pc = 0x2821ACu;
            goto label_2821ac;
        }
    }
    ctx->pc = 0x28218Cu;
label_28218c:
    // 0x28218c: 0x8e020028
    ctx->pc = 0x28218cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_282190:
    // 0x282190: 0x10400006
label_282194:
    if (ctx->pc == 0x282194u) {
        ctx->pc = 0x282194u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x282198u;
        goto label_282198;
    }
    ctx->pc = 0x282190u;
    {
        const bool branch_taken_0x282190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282194u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x282190) {
            ctx->pc = 0x2821ACu;
            goto label_2821ac;
        }
    }
    ctx->pc = 0x282198u;
label_282198:
    // 0x282198: 0x8e060004
    ctx->pc = 0x282198u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28219c:
    // 0x28219c: 0x8e04002c
    ctx->pc = 0x28219cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2821a0:
    // 0x2821a0: 0x40f809
label_2821a4:
    if (ctx->pc == 0x2821A4u) {
        ctx->pc = 0x2821A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x2821A8u;
        goto label_2821a8;
    }
    ctx->pc = 0x2821A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2821A8u);
        ctx->pc = 0x2821A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281EC8u: goto label_281ec8;
            case 0x281ECCu: goto label_281ecc;
            case 0x281ED0u: goto label_281ed0;
            case 0x281ED4u: goto label_281ed4;
            case 0x281ED8u: goto label_281ed8;
            case 0x281EDCu: goto label_281edc;
            case 0x281EE0u: goto label_281ee0;
            case 0x281EE4u: goto label_281ee4;
            case 0x281EE8u: goto label_281ee8;
            case 0x281EECu: goto label_281eec;
            case 0x281EF0u: goto label_281ef0;
            case 0x281EF4u: goto label_281ef4;
            case 0x281EF8u: goto label_281ef8;
            case 0x281EFCu: goto label_281efc;
            case 0x281F00u: goto label_281f00;
            case 0x281F04u: goto label_281f04;
            case 0x281F08u: goto label_281f08;
            case 0x281F0Cu: goto label_281f0c;
            case 0x281F10u: goto label_281f10;
            case 0x281F14u: goto label_281f14;
            case 0x281F18u: goto label_281f18;
            case 0x281F1Cu: goto label_281f1c;
            case 0x281F20u: goto label_281f20;
            case 0x281F24u: goto label_281f24;
            case 0x281F28u: goto label_281f28;
            case 0x281F2Cu: goto label_281f2c;
            case 0x281F30u: goto label_281f30;
            case 0x281F34u: goto label_281f34;
            case 0x281F38u: goto label_281f38;
            case 0x281F3Cu: goto label_281f3c;
            case 0x281F40u: goto label_281f40;
            case 0x281F44u: goto label_281f44;
            case 0x281F48u: goto label_281f48;
            case 0x281F4Cu: goto label_281f4c;
            case 0x281F50u: goto label_281f50;
            case 0x281F54u: goto label_281f54;
            case 0x281F58u: goto label_281f58;
            case 0x281F5Cu: goto label_281f5c;
            case 0x281F60u: goto label_281f60;
            case 0x281F64u: goto label_281f64;
            case 0x281F68u: goto label_281f68;
            case 0x281F6Cu: goto label_281f6c;
            case 0x281F70u: goto label_281f70;
            case 0x281F74u: goto label_281f74;
            case 0x281F78u: goto label_281f78;
            case 0x281F7Cu: goto label_281f7c;
            case 0x281F80u: goto label_281f80;
            case 0x281F84u: goto label_281f84;
            case 0x281F88u: goto label_281f88;
            case 0x281F8Cu: goto label_281f8c;
            case 0x281F90u: goto label_281f90;
            case 0x281F94u: goto label_281f94;
            case 0x281F98u: goto label_281f98;
            case 0x281F9Cu: goto label_281f9c;
            case 0x281FA0u: goto label_281fa0;
            case 0x281FA4u: goto label_281fa4;
            case 0x281FA8u: goto label_281fa8;
            case 0x281FACu: goto label_281fac;
            case 0x281FB0u: goto label_281fb0;
            case 0x281FB4u: goto label_281fb4;
            case 0x281FB8u: goto label_281fb8;
            case 0x281FBCu: goto label_281fbc;
            case 0x281FC0u: goto label_281fc0;
            case 0x281FC4u: goto label_281fc4;
            case 0x281FC8u: goto label_281fc8;
            case 0x281FCCu: goto label_281fcc;
            case 0x281FD0u: goto label_281fd0;
            case 0x281FD4u: goto label_281fd4;
            case 0x281FD8u: goto label_281fd8;
            case 0x281FDCu: goto label_281fdc;
            case 0x281FE0u: goto label_281fe0;
            case 0x281FE4u: goto label_281fe4;
            case 0x281FE8u: goto label_281fe8;
            case 0x281FECu: goto label_281fec;
            case 0x281FF0u: goto label_281ff0;
            case 0x281FF4u: goto label_281ff4;
            case 0x281FF8u: goto label_281ff8;
            case 0x281FFCu: goto label_281ffc;
            case 0x282000u: goto label_282000;
            case 0x282004u: goto label_282004;
            case 0x282008u: goto label_282008;
            case 0x28200Cu: goto label_28200c;
            case 0x282010u: goto label_282010;
            case 0x282014u: goto label_282014;
            case 0x282018u: goto label_282018;
            case 0x28201Cu: goto label_28201c;
            case 0x282020u: goto label_282020;
            case 0x282024u: goto label_282024;
            case 0x282028u: goto label_282028;
            case 0x28202Cu: goto label_28202c;
            case 0x282030u: goto label_282030;
            case 0x282034u: goto label_282034;
            case 0x282038u: goto label_282038;
            case 0x28203Cu: goto label_28203c;
            case 0x282040u: goto label_282040;
            case 0x282044u: goto label_282044;
            case 0x282048u: goto label_282048;
            case 0x28204Cu: goto label_28204c;
            case 0x282050u: goto label_282050;
            case 0x282054u: goto label_282054;
            case 0x282058u: goto label_282058;
            case 0x28205Cu: goto label_28205c;
            case 0x282060u: goto label_282060;
            case 0x282064u: goto label_282064;
            case 0x282068u: goto label_282068;
            case 0x28206Cu: goto label_28206c;
            case 0x282070u: goto label_282070;
            case 0x282074u: goto label_282074;
            case 0x282078u: goto label_282078;
            case 0x28207Cu: goto label_28207c;
            case 0x282080u: goto label_282080;
            case 0x282084u: goto label_282084;
            case 0x282088u: goto label_282088;
            case 0x28208Cu: goto label_28208c;
            case 0x282090u: goto label_282090;
            case 0x282094u: goto label_282094;
            case 0x282098u: goto label_282098;
            case 0x28209Cu: goto label_28209c;
            case 0x2820A0u: goto label_2820a0;
            case 0x2820A4u: goto label_2820a4;
            case 0x2820A8u: goto label_2820a8;
            case 0x2820ACu: goto label_2820ac;
            case 0x2820B0u: goto label_2820b0;
            case 0x2820B4u: goto label_2820b4;
            case 0x2820B8u: goto label_2820b8;
            case 0x2820BCu: goto label_2820bc;
            case 0x2820C0u: goto label_2820c0;
            case 0x2820C4u: goto label_2820c4;
            case 0x2820C8u: goto label_2820c8;
            case 0x2820CCu: goto label_2820cc;
            case 0x2820D0u: goto label_2820d0;
            case 0x2820D4u: goto label_2820d4;
            case 0x2820D8u: goto label_2820d8;
            case 0x2820DCu: goto label_2820dc;
            case 0x2820E0u: goto label_2820e0;
            case 0x2820E4u: goto label_2820e4;
            case 0x2820E8u: goto label_2820e8;
            case 0x2820ECu: goto label_2820ec;
            case 0x2820F0u: goto label_2820f0;
            case 0x2820F4u: goto label_2820f4;
            case 0x2820F8u: goto label_2820f8;
            case 0x2820FCu: goto label_2820fc;
            case 0x282100u: goto label_282100;
            case 0x282104u: goto label_282104;
            case 0x282108u: goto label_282108;
            case 0x28210Cu: goto label_28210c;
            case 0x282110u: goto label_282110;
            case 0x282114u: goto label_282114;
            case 0x282118u: goto label_282118;
            case 0x28211Cu: goto label_28211c;
            case 0x282120u: goto label_282120;
            case 0x282124u: goto label_282124;
            case 0x282128u: goto label_282128;
            case 0x28212Cu: goto label_28212c;
            case 0x282130u: goto label_282130;
            case 0x282134u: goto label_282134;
            case 0x282138u: goto label_282138;
            case 0x28213Cu: goto label_28213c;
            case 0x282140u: goto label_282140;
            case 0x282144u: goto label_282144;
            case 0x282148u: goto label_282148;
            case 0x28214Cu: goto label_28214c;
            case 0x282150u: goto label_282150;
            case 0x282154u: goto label_282154;
            case 0x282158u: goto label_282158;
            case 0x28215Cu: goto label_28215c;
            case 0x282160u: goto label_282160;
            case 0x282164u: goto label_282164;
            case 0x282168u: goto label_282168;
            case 0x28216Cu: goto label_28216c;
            case 0x282170u: goto label_282170;
            case 0x282174u: goto label_282174;
            case 0x282178u: goto label_282178;
            case 0x28217Cu: goto label_28217c;
            case 0x282180u: goto label_282180;
            case 0x282184u: goto label_282184;
            case 0x282188u: goto label_282188;
            case 0x28218Cu: goto label_28218c;
            case 0x282190u: goto label_282190;
            case 0x282194u: goto label_282194;
            case 0x282198u: goto label_282198;
            case 0x28219Cu: goto label_28219c;
            case 0x2821A0u: goto label_2821a0;
            case 0x2821A4u: goto label_2821a4;
            case 0x2821A8u: goto label_2821a8;
            case 0x2821ACu: goto label_2821ac;
            case 0x2821B0u: goto label_2821b0;
            case 0x2821B4u: goto label_2821b4;
            case 0x2821B8u: goto label_2821b8;
            case 0x2821BCu: goto label_2821bc;
            case 0x2821C0u: goto label_2821c0;
            case 0x2821C4u: goto label_2821c4;
            case 0x2821C8u: goto label_2821c8;
            case 0x2821CCu: goto label_2821cc;
            case 0x2821D0u: goto label_2821d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2821A8u; }
            if (ctx->pc != 0x2821A8u) { return; }
        }
    }
    ctx->pc = 0x2821A8u;
label_2821a8:
    // 0x2821a8: 0x24040001
    ctx->pc = 0x2821a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_2821ac:
    // 0x2821ac: 0xdfbf0020
    ctx->pc = 0x2821acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2821b0:
    // 0x2821b0: 0xdfb10010
    ctx->pc = 0x2821b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2821b4:
    // 0x2821b4: 0xdfb00000
    ctx->pc = 0x2821b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2821b8:
    // 0x2821b8: 0x80816cc
label_2821bc:
    if (ctx->pc == 0x2821BCu) {
        ctx->pc = 0x2821BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2821C0u;
        goto label_2821c0;
    }
    ctx->pc = 0x2821B8u;
    ctx->pc = 0x2821BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x205B30u;
    ClearAllPlayerControls_0x205b30(rdram, ctx, runtime); return;
    ctx->pc = 0x2821C0u;
label_2821c0:
    // 0x2821c0: 0xdfbf0020
    ctx->pc = 0x2821c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2821c4:
    // 0x2821c4: 0xdfb10010
    ctx->pc = 0x2821c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2821c8:
    // 0x2821c8: 0xdfb00000
    ctx->pc = 0x2821c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2821cc:
    // 0x2821cc: 0x3e00008
label_2821d0:
    if (ctx->pc == 0x2821D0u) {
        ctx->pc = 0x2821D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2821D4u;
        goto label_fallthrough_0x2821cc;
    }
    ctx->pc = 0x2821CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2821D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281EC8u: goto label_281ec8;
            case 0x281ECCu: goto label_281ecc;
            case 0x281ED0u: goto label_281ed0;
            case 0x281ED4u: goto label_281ed4;
            case 0x281ED8u: goto label_281ed8;
            case 0x281EDCu: goto label_281edc;
            case 0x281EE0u: goto label_281ee0;
            case 0x281EE4u: goto label_281ee4;
            case 0x281EE8u: goto label_281ee8;
            case 0x281EECu: goto label_281eec;
            case 0x281EF0u: goto label_281ef0;
            case 0x281EF4u: goto label_281ef4;
            case 0x281EF8u: goto label_281ef8;
            case 0x281EFCu: goto label_281efc;
            case 0x281F00u: goto label_281f00;
            case 0x281F04u: goto label_281f04;
            case 0x281F08u: goto label_281f08;
            case 0x281F0Cu: goto label_281f0c;
            case 0x281F10u: goto label_281f10;
            case 0x281F14u: goto label_281f14;
            case 0x281F18u: goto label_281f18;
            case 0x281F1Cu: goto label_281f1c;
            case 0x281F20u: goto label_281f20;
            case 0x281F24u: goto label_281f24;
            case 0x281F28u: goto label_281f28;
            case 0x281F2Cu: goto label_281f2c;
            case 0x281F30u: goto label_281f30;
            case 0x281F34u: goto label_281f34;
            case 0x281F38u: goto label_281f38;
            case 0x281F3Cu: goto label_281f3c;
            case 0x281F40u: goto label_281f40;
            case 0x281F44u: goto label_281f44;
            case 0x281F48u: goto label_281f48;
            case 0x281F4Cu: goto label_281f4c;
            case 0x281F50u: goto label_281f50;
            case 0x281F54u: goto label_281f54;
            case 0x281F58u: goto label_281f58;
            case 0x281F5Cu: goto label_281f5c;
            case 0x281F60u: goto label_281f60;
            case 0x281F64u: goto label_281f64;
            case 0x281F68u: goto label_281f68;
            case 0x281F6Cu: goto label_281f6c;
            case 0x281F70u: goto label_281f70;
            case 0x281F74u: goto label_281f74;
            case 0x281F78u: goto label_281f78;
            case 0x281F7Cu: goto label_281f7c;
            case 0x281F80u: goto label_281f80;
            case 0x281F84u: goto label_281f84;
            case 0x281F88u: goto label_281f88;
            case 0x281F8Cu: goto label_281f8c;
            case 0x281F90u: goto label_281f90;
            case 0x281F94u: goto label_281f94;
            case 0x281F98u: goto label_281f98;
            case 0x281F9Cu: goto label_281f9c;
            case 0x281FA0u: goto label_281fa0;
            case 0x281FA4u: goto label_281fa4;
            case 0x281FA8u: goto label_281fa8;
            case 0x281FACu: goto label_281fac;
            case 0x281FB0u: goto label_281fb0;
            case 0x281FB4u: goto label_281fb4;
            case 0x281FB8u: goto label_281fb8;
            case 0x281FBCu: goto label_281fbc;
            case 0x281FC0u: goto label_281fc0;
            case 0x281FC4u: goto label_281fc4;
            case 0x281FC8u: goto label_281fc8;
            case 0x281FCCu: goto label_281fcc;
            case 0x281FD0u: goto label_281fd0;
            case 0x281FD4u: goto label_281fd4;
            case 0x281FD8u: goto label_281fd8;
            case 0x281FDCu: goto label_281fdc;
            case 0x281FE0u: goto label_281fe0;
            case 0x281FE4u: goto label_281fe4;
            case 0x281FE8u: goto label_281fe8;
            case 0x281FECu: goto label_281fec;
            case 0x281FF0u: goto label_281ff0;
            case 0x281FF4u: goto label_281ff4;
            case 0x281FF8u: goto label_281ff8;
            case 0x281FFCu: goto label_281ffc;
            case 0x282000u: goto label_282000;
            case 0x282004u: goto label_282004;
            case 0x282008u: goto label_282008;
            case 0x28200Cu: goto label_28200c;
            case 0x282010u: goto label_282010;
            case 0x282014u: goto label_282014;
            case 0x282018u: goto label_282018;
            case 0x28201Cu: goto label_28201c;
            case 0x282020u: goto label_282020;
            case 0x282024u: goto label_282024;
            case 0x282028u: goto label_282028;
            case 0x28202Cu: goto label_28202c;
            case 0x282030u: goto label_282030;
            case 0x282034u: goto label_282034;
            case 0x282038u: goto label_282038;
            case 0x28203Cu: goto label_28203c;
            case 0x282040u: goto label_282040;
            case 0x282044u: goto label_282044;
            case 0x282048u: goto label_282048;
            case 0x28204Cu: goto label_28204c;
            case 0x282050u: goto label_282050;
            case 0x282054u: goto label_282054;
            case 0x282058u: goto label_282058;
            case 0x28205Cu: goto label_28205c;
            case 0x282060u: goto label_282060;
            case 0x282064u: goto label_282064;
            case 0x282068u: goto label_282068;
            case 0x28206Cu: goto label_28206c;
            case 0x282070u: goto label_282070;
            case 0x282074u: goto label_282074;
            case 0x282078u: goto label_282078;
            case 0x28207Cu: goto label_28207c;
            case 0x282080u: goto label_282080;
            case 0x282084u: goto label_282084;
            case 0x282088u: goto label_282088;
            case 0x28208Cu: goto label_28208c;
            case 0x282090u: goto label_282090;
            case 0x282094u: goto label_282094;
            case 0x282098u: goto label_282098;
            case 0x28209Cu: goto label_28209c;
            case 0x2820A0u: goto label_2820a0;
            case 0x2820A4u: goto label_2820a4;
            case 0x2820A8u: goto label_2820a8;
            case 0x2820ACu: goto label_2820ac;
            case 0x2820B0u: goto label_2820b0;
            case 0x2820B4u: goto label_2820b4;
            case 0x2820B8u: goto label_2820b8;
            case 0x2820BCu: goto label_2820bc;
            case 0x2820C0u: goto label_2820c0;
            case 0x2820C4u: goto label_2820c4;
            case 0x2820C8u: goto label_2820c8;
            case 0x2820CCu: goto label_2820cc;
            case 0x2820D0u: goto label_2820d0;
            case 0x2820D4u: goto label_2820d4;
            case 0x2820D8u: goto label_2820d8;
            case 0x2820DCu: goto label_2820dc;
            case 0x2820E0u: goto label_2820e0;
            case 0x2820E4u: goto label_2820e4;
            case 0x2820E8u: goto label_2820e8;
            case 0x2820ECu: goto label_2820ec;
            case 0x2820F0u: goto label_2820f0;
            case 0x2820F4u: goto label_2820f4;
            case 0x2820F8u: goto label_2820f8;
            case 0x2820FCu: goto label_2820fc;
            case 0x282100u: goto label_282100;
            case 0x282104u: goto label_282104;
            case 0x282108u: goto label_282108;
            case 0x28210Cu: goto label_28210c;
            case 0x282110u: goto label_282110;
            case 0x282114u: goto label_282114;
            case 0x282118u: goto label_282118;
            case 0x28211Cu: goto label_28211c;
            case 0x282120u: goto label_282120;
            case 0x282124u: goto label_282124;
            case 0x282128u: goto label_282128;
            case 0x28212Cu: goto label_28212c;
            case 0x282130u: goto label_282130;
            case 0x282134u: goto label_282134;
            case 0x282138u: goto label_282138;
            case 0x28213Cu: goto label_28213c;
            case 0x282140u: goto label_282140;
            case 0x282144u: goto label_282144;
            case 0x282148u: goto label_282148;
            case 0x28214Cu: goto label_28214c;
            case 0x282150u: goto label_282150;
            case 0x282154u: goto label_282154;
            case 0x282158u: goto label_282158;
            case 0x28215Cu: goto label_28215c;
            case 0x282160u: goto label_282160;
            case 0x282164u: goto label_282164;
            case 0x282168u: goto label_282168;
            case 0x28216Cu: goto label_28216c;
            case 0x282170u: goto label_282170;
            case 0x282174u: goto label_282174;
            case 0x282178u: goto label_282178;
            case 0x28217Cu: goto label_28217c;
            case 0x282180u: goto label_282180;
            case 0x282184u: goto label_282184;
            case 0x282188u: goto label_282188;
            case 0x28218Cu: goto label_28218c;
            case 0x282190u: goto label_282190;
            case 0x282194u: goto label_282194;
            case 0x282198u: goto label_282198;
            case 0x28219Cu: goto label_28219c;
            case 0x2821A0u: goto label_2821a0;
            case 0x2821A4u: goto label_2821a4;
            case 0x2821A8u: goto label_2821a8;
            case 0x2821ACu: goto label_2821ac;
            case 0x2821B0u: goto label_2821b0;
            case 0x2821B4u: goto label_2821b4;
            case 0x2821B8u: goto label_2821b8;
            case 0x2821BCu: goto label_2821bc;
            case 0x2821C0u: goto label_2821c0;
            case 0x2821C4u: goto label_2821c4;
            case 0x2821C8u: goto label_2821c8;
            case 0x2821CCu: goto label_2821cc;
            case 0x2821D0u: goto label_2821d0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2821cc:
    ctx->pc = 0x2821D4u;
}
